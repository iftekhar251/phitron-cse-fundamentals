class shopping:
    def __init__(self,name):
        self.name=name
        self.cart=[]
    
    def add_to_cart(self,item,price,quantity):
        product={'item':item, 'price':price,'quantity':quantity}
        self.cart.append(product)
    
    def remove_item(self,item):
        for product in self.cart:
            if product['item']==item:
                self.cart.remove(product)
                break
        

    def checkout(self,amount):
        total=0
        for item in self.cart:
            total+=item['price']*item['quantity']
        print('total price :',total)

        if amount<total:
            print(f'please provide {total-amount} more')
        else:
            extra=amount-total
            print(f'Here is your product and extra money {extra}')
sapan=shopping('alan sapan')
sapan.add_to_cart('salad',50,6)
sapan.add_to_cart('dim',120,5)
sapan.remove_item('salad')
sapan.add_to_cart('alu',25,7)

print(sapan.cart)

#sapan.checkout(500)
sapan.checkout(1500)
