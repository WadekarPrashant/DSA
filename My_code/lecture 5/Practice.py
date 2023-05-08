string=str(input())
ind = 0
def gen_compressed_str(string):
    global ind
    comp_str = ""
    len_str = len(string)
    while (ind != len_str):
        count = 1

        while ((ind < (len_str-1)) and (string[ind] == string[ind+1])):
            count = count + 1
            ind = ind + 1

        # if (count == 1):
        #     comp_str = comp_str + str(string[ind])
        else:
            comp_str = comp_str + str(string[ind]) + str(count)

        ind += 1

    return comp_str
      
print(gen_compressed_str(string))