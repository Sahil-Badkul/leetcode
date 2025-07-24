class MyStack:

    def __init__(self):
        self.q1 = []        
        self.q2 = []

    def push(self, x: int) -> None:
        self.q1.append(x)
        # print(self.q1)

    def pop(self) -> int:
        while self.q1:
            self.q2.append(self.q1.pop())
        
        print(self.q2)
        popped = self.q2.pop(0)

        while self.q2:
            self.q1.append(self.q2.pop())
        
        return popped

    def top(self) -> int:
        if self.q1:
            return self.q1[-1]

    def empty(self) -> bool:
        return not self.q1


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()