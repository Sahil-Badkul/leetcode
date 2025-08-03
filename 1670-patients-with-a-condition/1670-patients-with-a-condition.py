import pandas as pd

def find_patients(patients: pd.DataFrame) -> pd.DataFrame:
    df = patients[(patients['conditions'].str.startswith('DIAB1')) | (patients['conditions'].str.contains(' DIAB1'))]
    return df