import os 
# This code works better with terminal command key extension in vscode

class Route:
    
    def __init__(self, route):
        self.route = route

    def find_cpp_file(self):
        self.route = self.route[::-1]
        my_file = "" 
        for i in self.route[1::]:
            if i !="/":
                my_file += i
            else:
                break
        return my_file[::-1]
    
    def delete_cpp_ext(self,cpp_file):
        my_file_name = ""
        for i in cpp_file:
            if i != ".":
                my_file_name += i 
            else:
                break
        return my_file_name





def run():
    route_raw = input("press cmd+h ")
    my_route = Route(route_raw)
    route_cpp = my_route.find_cpp_file()
    route_exe = my_route.delete_cpp_ext(route_cpp)
    
   
    os.system("g++ {} -o bin/{}".format(route_cpp,route_exe))
    print("Compiled successfully")
    print("--------------------------------------------------")
    print('\n')

    os.system("./bin/{}".format(route_exe))
    print('\n')



if __name__ == '__main__':
    run()
    
