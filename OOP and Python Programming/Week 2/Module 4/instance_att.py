class shop:
    mall='jamuna'

    def __init__(self,buyer):
        self.buyer=buyer
        self.cart=[] #instance attribute cart


    def add_to_cart(self,item):
        self.cart.append(item)

mehza=shop('mehja')
mehza.add_to_cart('shoes')
mehza.add_to_cart('phone')
print(mehza.cart)

afran=shop('nishu')
afran.add_to_cart('mobile')
afran.add_to_cart('vape')
print(afran.cart)

