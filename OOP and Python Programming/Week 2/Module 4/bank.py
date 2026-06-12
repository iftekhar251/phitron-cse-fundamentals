class bank:
    def __init__(self,balance):
        self.balance=balance
        self.min_withdraw=100
        self.max_withdraw=100000
    
    def get_balance(self):
        return self.balance
    
    def deposit(self,amount):
        if amount>0:
            self.balance+=amount

    def withdraw(self,amount):
        if amount<self.min_withdraw:
            print(f'fokir,you cannot withdraw less than: {self.min_withdraw}') 
        
        elif amount>self.max_withdraw:
            print(f'bank e eto tk nai, you cannot withdraw more than: {self.max_withdraw}')
        
        else:
            self.balance-=amount
            print(f'here is your money :{amount}') 
            print(f'you money after withdraw :{self.balance}')

D_bank=bank(15000)
D_bank.withdraw(50)
D_bank.withdraw(150000)
D_bank.withdraw(2000)