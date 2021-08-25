import os
c = 0


def createFolders(path, n, depth, max_depth=1):
    global c
    if depth < max_depth:
        for i in range(n):
            new_path = path+f"\\{i}"
            # print(new_path)
            os.mkdir(new_path)
            c += 1
            createFolders(new_path, n, depth+1)


createFolders(os.path.abspath("./temp/temp"), 7, 0, max_depth=7)
print(f"{c} files created")
