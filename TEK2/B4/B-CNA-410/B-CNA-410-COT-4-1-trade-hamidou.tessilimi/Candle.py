##
## EPITECH PROJECT, 2021
## trade
## File description:
## Candle
##

class Candle():
    def __init__(self, format, string):
        self.date = ""
        self.high = 0.0
        self.low = 0.0
        self.open = 0.0
        self.close = 0.0
        self.volume = 0.0
        format_split = format.split(",")
        data = string.split(",")
        i = 0
        for var in format_split:
            if (var == "volume"):
                self.volume = float(data[i])
            if (var == "close"):
                self.close = float(data[i])
            if (var == "open"):
                self.open = float(data[i])
            if (var == "low"):
                self.low = float(data[i])
            if (var == "high"):
                self.high = float(data[i])
            if (var == "date"):
                self.date = data[i]
            if (var == "pair"):
                self.pair = data[i]
            i = i + 1

    def average(self):
        return ((self.open + self.close) / 2)

    def inc(self):
        return (True if (self.close > self.open) else False)