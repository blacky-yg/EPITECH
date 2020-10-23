#!/usr/bin/env python3.6
from flask import render_template, redirect, flash, request, url_for
from flask_login import current_user, login_user, logout_user, login_required
from werkzeug.urls import url_parse
from app import app, db, login_manager
from app.forms import LoginForm, RegistrationForm, TaskForm
from app.models import User, Task
from app.task import add_task

@app.shell_context_processor
def make_shell_context():
    return {'db': db, 'User': User, 'Task': Task}

@app.route('/')
@app.route('/index')
def index():
    return render_template('index.html')

@app.route('/register', methods=['GET', 'POST'])
def register():
    if current_user.is_authenticated:
        return redirect(url_for('user_connect'))
    form = RegistrationForm()
    if form.validate_on_submit():
        user = User(username=form.username.data, email=form.email.data)
        user.set_password(form.password.data)
        db.session.add(user)
        db.session.commit()
        flash('Your account was created successfully. Please login to access to your profile')
        return redirect(url_for('signin'))
    return render_template('auth/register.html', title='Register', form=form)

@app.route('/signin', methods=['GET', 'POST'])
def signin():
    if current_user.is_authenticated:
        return redirect(url_for('user_connect'))
    form = LoginForm()
    if form.validate_on_submit():
        user = User.query.filter_by(username=form.username.data).first()
        if user is None or not user.check_password(form.password.data):
            flash('Invalid username or password')
            return redirect(url_for('signin'))
        login_user(user, remember=form.remember.data)
        next_page = request.args.get('next')
        if not next_page or url_parse(next_page).netloc != '':
            next_page = url_for('index')
        return redirect(url_for('user_connect'))
    return render_template('auth/signin.html', title='Sign In', form=form)

@app.route('/signout')
@login_required
def signout():
    logout_user()
    return redirect(url_for('index'))

@app.route('/user', methods=['GET', 'POST'])
@app.route('/user/task', methods=['GET', 'POST'])
@login_required
def user_connect():
    form = TaskForm()
    return render_template('user/user.html', form=form)

@app.route('/user/task/id', methods=['GET', 'POST'])
def show_task_id():
    form = TaskForm()
    return render_template('user/user.html', form=form)

@app.route('/user/task/add', methods=['GET', 'POST'])
def create_task():
    form = TaskForm()
    if form.validate_on_submit():
        task = add_task(db, form)
        return redirect(url_for('user_connect'))
    return render_template('user/user.html', form=form)

# @app.route('/user/task/<task_id>', methods=['GET', 'POST'])
# @app.route('/user/task/del/<task_id>', methods=['POST'])
# @app.route('/user/del/id', methods=['POST'])
# def del_task():
#     form = TaskForm()
#     return render_template('user/user.html', form=form)