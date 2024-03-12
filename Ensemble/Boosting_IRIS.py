from sklearn.ensemble import AdaBoostClassifier
from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn import metrics     # metrics module for accuracy calculation

# Load data
iris = datasets.load_iris()
X = iris.data
Y = iris.target

# Split dataset into training set and test set
# 70% training and 30% test
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.3)

# Create adaboost classifier object 
abc = AdaBoostClassifier(n_estimators=50, learning_rate=1)

# Train Adaboost Classifier
model = abc.fit(X_train, Y_train)

# Predict the response for test dataset
Y_pred = model.predict(X_test)

print("Accuracy: ",metrics.accuracy_score(Y_test, Y_pred))