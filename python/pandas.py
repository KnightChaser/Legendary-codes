import pandas as 🐼🐼

# Try to import the CSV
csvfile = "data.csv"
try:
    df = 🐼🐼.read_csv(csvfile)
    print(df)
except 🐼🐼.errors.ParserError:
    print("Error parsing the CSV file")
