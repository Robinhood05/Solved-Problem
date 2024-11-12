from collections import deque

def is_bisexual(graph) -> bool:
    size = len(graph)
    gender = [-1] * size  

    for node in range(size):
        if gender[node] == -1: 
            gender[node] = "male" 

            q = deque([node])

            while q:
                current_node = q.popleft()

                for neighbour in graph[current_node]:
                    if gender[neighbour] == -1:  
                        if gender[current_node] == "male":
                            gender[neighbour] = "female"  
                        else:
                            gender[neighbour] = "male"
                        q.append(neighbour)
                    elif gender[neighbour] == gender[current_node]: 
                        return False
    return True


test = int(input())
index = 1

for _ in range(test):
    nodes, edges = map(int, input().split())
    
    graph = [[] for _ in range(nodes)]
    
    for _ in range(edges):
        root, neighbour = map(int, input().split())
        graph[root - 1].append(neighbour - 1)  
        graph[neighbour - 1].append(root - 1)  

    if is_bisexual(graph):
        print(f"Scenario #{index}:")
        print("No suspicious bugs found!")
    else:
        print(f"Scenario #{index}:")
        print("Suspicious bugs found!")
    
    index += 1
