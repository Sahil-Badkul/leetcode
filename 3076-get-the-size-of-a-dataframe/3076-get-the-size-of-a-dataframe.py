import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    # print(len(players), len(players[0])) # This will raise an error as [0] not exist
    return [len(players), len(players.columns)]
    

    # len(arr) -> row
    # len(arr[0]) -> col