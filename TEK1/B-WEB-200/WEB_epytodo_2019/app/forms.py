#!/usr/bin/env python3.6
from flask_wtf import FlaskForm, RecaptchaField
from wtforms import StringField, PasswordField, BooleanField, SubmitField, DateField
from wtforms.validators import InputRequired, ValidationError, EqualTo, Length, Email
from app.models import User

class LoginForm(FlaskForm):
    username = StringField('Username', validators=[InputRequired(), Length(min=5, max=20)])
    password = PasswordField('Password', validators=[InputRequired(), Length(min=8, max=20)])
    remember = BooleanField('Remember Me')
    recaptcha = RecaptchaField()
    submit = SubmitField('Signin')

class RegistrationForm(FlaskForm):
    email = StringField('Email', validators=[InputRequired(), Email(message="Invalid Email"), Length(min=5, max=50)])
    username = StringField('Username', validators=[InputRequired(), Length(min=5, max=20)])
    password = PasswordField('Password', validators=[InputRequired(), Length(min=8, max=20)])
    confirm_password = PasswordField('Confirm Password', validators=[InputRequired(), EqualTo('password')])
    recaptcha = RecaptchaField()
    submit = SubmitField('Register')

    def validate_username(self, username):
        user = User.query.filter_by(username=username.data).first()
        if user is not None:
            raise ValidationError('Please, use a different username')

    def validate_email(self, email):
        user = User.query.filter_by(email=email.data).first()
        if user is not None:
            raise ValidationError('Please, use a different email address')

class TaskForm(FlaskForm):
    title = StringField('Title', validators=[InputRequired(), Length(min=3, max=50)])
    begin = DateField('Begin (dd-mm-YYYY)', format='%d-%m-%Y')
    end = DateField('End (dd-mm-YYYY)', format='%d-%m-%Y', validators=[InputRequired()])
    submit = SubmitField('Add Task')