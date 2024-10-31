class Solution(object):
    def lengthOfLongestSubstring(self, s):

        if s=="":
            return 0
        count = 0

        for i in range(len(s)):
            current_count = 1
    
            for j in range(i + 1, len(s)):
                if s[j] in s[i:j]: 
                    count = max(current_count, count)  
                    break
                elif (j == len(s) - 1) and (s[j] not in s[i:j]):
                    current_count += 1
                    count = max(current_count,count)
                    #print("as it is not in previous incrementing count") 
                    #print(current_count)

                    
                
                else :
                    current_count +=1
                    #print("after incrementing ")
                    #print(current_count)
        
        #print(current_count)

        count = max(current_count, count) 
        #print(count)
        #count = count +1

        return count
        
        
