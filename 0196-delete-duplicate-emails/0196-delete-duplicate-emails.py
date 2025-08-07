import pandas as pd

def delete_duplicate_emails(person: pd.DataFrame) -> None:
    emailDF = person.groupby("email")["id"].min().values
    print(emailDF)
    person.drop(person[~person['id'].isin(emailDF)].index, inplace=True)
