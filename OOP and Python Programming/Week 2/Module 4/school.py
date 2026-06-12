class student:
    def __init__(self,name,current_class,id):
        self.name=name
        self.id=id
        self.current_class=current_class

    def __repr__(self):
        return f'student with name :{self.name}, class:{self.current_class},id:{self.id}'
    
class Teacher:
    def __init__(self,name,subject,id):
        self.name=name
        self.subject=subject
        self.id=id

    def __repr__(self):
        return f'Teacher:{self.name},Subject:{self.subject},ID:{self.id}'
        

class school:
    def __init__(self,name)-> None:
        self.name=name
        self.teachers=[]
        self.students=[]
    def add_teacher(self,name,subject):
        id=len(self.teachers)+101
        teacher=Teacher(name,subject,id)
        self.teachers.append(teacher)

    def enroll(self,name,fee):
        if fee<6500:
            return f'not enough fee'
        else:
            id=len(self.students)+1
            std=student(name,1,id)
            self.students.append(std)
            return f'{name}enroll with id{id}, extra money {fee-6500}'

    def __repr__(self):
        print('welcome to ',self.name)
        print('------OUR TEACHERS-----')
        for teacher in self.teachers:
            print(teacher)
        print('------OUR STUDENTS-----')
        for student in self.students:
            print(student)
        
        
# alia=student('Alia torkari',9,1)
# teacher=Teacher('Modon ',' physics',12)

# print(alia)
# print(teacher)
        
phitron=school('Phitron')
phitron.enroll('akil',5200)
phitron.enroll('alia',8000)
phitron.enroll('asira',7000)

phitron.add_teacher('tom','ds',)
phitron.add_teacher('gom','algo',)
phitron.add_teacher('boka','dm',)

print(phitron)
