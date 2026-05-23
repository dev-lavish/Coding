import pandas as pd

df = pd.read_csv(
    'spam.csv',#modified
    sep='\t',
    header=None,
    names=['label', 'message'],
    encoding='latin-1'
)
df['label'] = df['label'].map({'ham': 0, 'spam': 1})
df['message'] = df['message'].str.lower()

print(df.head())
from sklearn.model_selection import train_test_split

X = df['message']
y = df['label']

X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)

print("Training size:", len(X_train))
print("Testing size:", len(X_test))

from sklearn.feature_extraction.text import CountVectorizer

vectorizer = CountVectorizer(stop_words='english')

X_train = vectorizer.fit_transform(X_train)
X_test = vectorizer.transform(X_test)

print("Converted to numbers")
from sklearn.linear_model import LogisticRegression

model = LogisticRegression()

model.fit(X_train, y_train)

print("Model trained")
y_pred = model.predict(X_test)

print("Predictions done")
from sklearn.metrics import accuracy_score

print("Accuracy:", accuracy_score(y_test, y_pred))

sample = ["win cash now free"]

sample_vector = vectorizer.transform(sample)
print(vectorizer.get_feature_names_out()[:20])

prediction = model.predict(sample_vector)

print("Prediction:", prediction)