class Queuelink:
    def __init__(self,n):
        self.n = n
        self.nxt = None

class qu:
    def __init__(self):
        self.a = self.z = None

    def enq(self, x):
        t = Queuelink(x)
        if self.z == None:
            self.a = self.z = t
            t1 = self.a
            while t1 !=None:
                print(t1.n,"<-",end=' ')
                t1 = t1.nxt
        else:
            self.z.nxt = t
            self.z = t
            t1 = self.a
            while t1 != None:
                print(t1.n,"<-",end=' ')
                t1 = t1.nxt
        print(" ")

    def deq(self):
        if self.a == None:
            print("Empty Queue!!")
        else:
            self.a = self.a.nxt
            if self.a == None:
                 self.z = None
                 print("Empty Queue!!")
            else:
                 print("Element Deleted from Queue: ",end=' ')
                 if self.a!=None:
                    t1 = self.a
                    while t1!=None:
                           print(t1.n,"->",end=" ")
                           t1 = t1.nxt
                    print(" ")

    def printqu(self):
        if self.a==None or self.z==None:
            print("Empty Queue!!")
        else:
            print("The elements present in a queue: ",end=' ')
            t1 = self.a
            while t1!=None:
                print(t1.n,end=' ')
                t1 = t1.nxt

if __name__ == '__main__':
    ob = qu()
    ob.enq(11)
    ob.enq(12)
    ob.enq(13)
    ob.enq(14)
    ob.deq()
    ob.deq()
    ob.enq(14)
    ob.enq(15)
    ob.enq(16)
    ob.deq()
    ob.deq()
    ob.printqu()

