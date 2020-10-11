#!/usr/bin/env python3.6
from app import app
import os

basedir = os.path.abspath(os.path.dirname(__file__))
app.config['SECRET_KEY'] = 'Godisgreat'
app.config['RECAPTCHA_PUBLIC_KEY'] = '6Lepx-YUAAAAAOGcKSQr5I43WDIGlcSCb09EXPuU'
app.config['RECAPTCHA_PRIVATE_KEY'] = '6Lepx-YUAAAAAPpKFWexSaH-XLCrNS4liFXOcIkP'
app.config['TESTING'] = True
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
app.config['SQLALCHEMY_DATABASE_URI'] = os.environ.get('DATABASE_URL') or \
        'sqlite:///' + os.path.join(basedir, 'database.db')
# app.config['MYSQL_HOST'] = 'localhost'
# app.config['MYSQL_NAME'] = 'database.db'
# app.config['MYSQL_SOCK'] = '/var/lib/mysql/mysql.sock'
# app.config['MYSQL_USER'] = 'blacky'
# app.config['MYSQL_PASS'] = 'blacky'