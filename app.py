from flask import Flask
from flask import render_template
from datetime import datetime
from flask_sqlalchemy import SQLAlchemy

app=Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI']='sqlite:///todo.db'
db=SQLAlchemy(app)
class TODO(db.Model):
    num=db.Column(db.Integer,primary_key=True)
    todo=db.Column(db.Text,nullable=False)
    start=db.Column(db.DateTime,nullable=False,default=datetime.utcnow)
    end=db.Column(db.DateTime,nullable=False,default=datetime.utcnow)
    def __repr__(self):
        return "Num : "+str(self.num)



@app.route('/')
def hello():
    return render_template('home.html')

@app.route('/home1')
def hello1():
    return render_template('home1.html')

if(__name__=="__main__"):
    app.run(debug=True)