##
## EPITECH PROJECT, 2021
## trade
## File description:
## Bot
##

from Utils import *
from Candle import Candle

class Bot():
    def __init__(self):
        self.settings = ["settings player_names", "settings your_bot",
            "settings timebank", "settings time_per_move",
            "settings candle_interval", "settings candle_format",
            "settings candle_total", "settings candles_given",
            "settings initial_stack", "settings transaction_fee_percent"
        ]
        self.p_name = get_string(self.get_input(), self.settings[0])
        self.bot_name = get_string(self.get_input(), self.settings[1])
        self.time_bank = get_float(self.get_input(), self.settings[2])
        self.time_per_move = get_float(self.get_input(), self.settings[3])
        self.candle_interval = get_float(self.get_input(), self.settings[4])
        self.candle_format = get_string(self.get_input(), self.settings[5])
        self.candle_total = get_float(self.get_input(), self.settings[6])
        self.candle_given = get_float(self.get_input(), self.settings[7])
        self.initial_stack = get_float(self.get_input(), self.settings[8])
        self.transaction_fee = get_float(self.get_input(), self.settings[9])
        # 0 => BTC
        # 1 => USDT
        # 2 => ETH
        self.currency = [0.0, 0.0, 0.0]
        self.candles = []
        self.BTC_ETH = []
        self.USDT_ETH = []
        self.USDT_BTC = []

    def get_input(self):
        result = ""
        try:
            result = input()
        except:
            return ("nan")
        return (result)

    def update_currency(self, command):
        values = get_string(command, "update game stacks")
        currencies = values.split(",")
        for currency in currencies:
            if (parse_cmd(currency, "BTC")):
                self.currency[0] = float(currency.split(":")[1])
            if (parse_cmd(currency, "USDT")):
                self.currency[1] = float(currency.split(":")[1])
            if (parse_cmd(currency, "ETH")):
                self.currency[2] = float(currency.split(":")[1])

    def get_new_candle(self, command):
        candles = command.split(";")
        for candle in candles:
            new = Candle(self.candle_format, candle)
            if (new.pair == "BTC_ETH"):
                self.BTC_ETH.append(new)
            if (new.pair == "USDT_ETH"):
                self.USDT_ETH.append(new)
            if (new.pair == "USDT_BTC"):
                self.USDT_BTC.append(new)

    def buy(self, pair, close):
        if (parse_cmd(pair, "BTC") == True and self.currency[0] > 0.0001):
            print("buy %s %f" % (pair, self.currency[0] / close))
            return True
        if (parse_cmd(pair, "USDT") == True and self.currency[1] > 0.0001):
            print("buy %s %f" % (pair, self.currency[1] / close))
            return True
        if (parse_cmd(pair, "ETH") == True and self.currency[2] > 0.0001):
            print("buy %s %f" % (pair, self.currency[2] / close))
            return True
        return False

    def sell(self, pair, close):
        print("pass")

    def choose_action(self, candles):
        last = candles[-1].average()
        min, max = last, last
        pair, close = candles[0].pair, candles[0].close
        for candle in candles:
            tmp = candle.average()
            if (min > tmp):
                min = tmp
            if (max < tmp):
                max = tmp
        try:
            res = (last - min) / (max - min)
            res = res * 100
        except ZeroDivisionError:
            res = 0
        if (res > 60):
            self.sell(pair, close)
            return (1)
        if (res < 40 and self.buy(pair, close) == True):
            return (1)
        return 0

    def exec_action(self):
        all = [self.BTC_ETH, self.USDT_BTC, self.USDT_ETH]
        for candles in all:
            if (self.choose_action(candles) != 0):
                return
        print("pass")

    def start(self):
        command = self.get_input()
        commands_list = ["action order", "update game next_candles", "update game stacks"]
        while (command):
            if (parse_cmd(command, commands_list[0]) == True):
                self.exec_action()
            if (parse_cmd(command, commands_list[1]) == True):
                self.get_new_candle(get_string(command, commands_list[1]))
            if (parse_cmd(command, commands_list[2]) == True):
                self.update_currency(command)
            command = self.get_input()