# Hyat Warning yetey karan 27 aani 33 la iteration cha problem yetoy (max_iter=1000) assa add kela tr jatay
import pandas as pd 
import numpy as np 
import matplotlib.pyplot as plt 
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from warnings import simplefilter

simplefilter(action='ignore', category=FutureWarning)

print("----Marvellous Infosystems----")

print("----Diabetes Predictor using Logistic Regression----")

diabetes = pd.read_csv('diabetes.csv')

print("Columns of Dataset")
print(diabetes.columns)

print("First 5 records of dataset")
print(diabetes.head())

print("Dimension of diabetes data : {}".format(diabetes.shape))

X_train, X_test, Y_train, Y_test = train_test_split(diabetes.loc[:,diabetes.columns != 'Outcome'], diabetes['Outcome'], stratify = diabetes['Outcome'], random_state=66)

logreg = LogisticRegression().fit(X_train,Y_train)

print("Training set accuracy: {:.3f}".format(logreg.score(X_train,Y_train)))

print("Test set accuracy: {:.3f}".format(logreg.score(X_test,Y_test)))

logreg001 = LogisticRegression(C=0.01).fit(X_train,Y_train)

print("Training set accuracy: {:.3f}".format(logreg001.score(X_train,Y_train)))
print("Test set accuracy: {:.3f}".format(logreg001.score(X_test,Y_test)))