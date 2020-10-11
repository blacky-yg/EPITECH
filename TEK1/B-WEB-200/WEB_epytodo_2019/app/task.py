#!/usr/bin/env python3.6
from flask import flash, redirect, url_for
from flask_login import current_user
from datetime import datetime
from app.models import Task

def add_task(db, form):
    begin_date = form.begin.data[0:2]
    begin_month = form.begin.data[3:5]
    begin_year = form.begin.data[6:]
    end_date = form.end.data[0:2]
    end_month = form.end.data[3:5]
    end_year = form.end.data[6:]
    task = Task(title=form.title.data, begin=datetime(form.begin_year, form.begin_month, form.begin.date),
                    end=datetime(form.end_year, form.end_month, form.end.date),
                        status=0, user_id=current_user.user_id)
    db.session.add(task)
    db.session.commit()
    flash('Your task was added successufully.')
    return task