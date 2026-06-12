def call():
    print('calling someone i dont knw')
    return 'call done'
class Phone:
    price=12000
    color='red'
    brand='motorola'
    features=['camera','speaker','hammer']

    def call(self):
        print('calling one person')
    def send_sms(self,phone,sms):
        text=f'sending sms to:{phone} and message :{sms}'
        return text
my_phone=Phone()
print(my_phone.features)
my_phone.call()
result=my_phone.send_sms(18154,'I miss you phyton')
print(result)