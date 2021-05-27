import operator as op

############ Binary Search ##################
def binary_search(L,K,low=None,high=None,reverse=False):
    #pass
    """
        it returns the index where a[i]=K, if no such element is present then it
        returns -1

        Parameters
        ----------
        L   : sequence,
        K   : element to be searched
        low : lower index of L, optional
        high : highest index of L, optional
        reverse : True if given sequence is in descending order, optional
    """
    #N = len(L)
    if low is None:
        low = 0
        Nl = low
    else:
        Nl = low

    if high is None:
        high = len(L)
        N=high
    else:
        N=high
    
    if reverse:
        operator = op.gt
    else:
        operator = op.lt

    while low <= high:
        mid = (low+high)//2
        if L[mid]==K:
            return mid
        elif operator(L[mid] , K):
            low = mid + 1
        else:
            high = mid-1
    else:
        return -1

############################# LOWER BOUND function ###########################
def lower_bound(L,K,low=None,high=None,reverse=False)-> int :
    """
        it returns the index where a[:i] < K and a[i:] >= K

        Parameters
        ----------
        L   : sequence,
        K   : element to be searched
        low : lower index of L, optional
        high : highest index of L, optional
        reverse : True if given sequence is in descending order, optional
    """
    N = len(L)
    if low is None:
        low = 0
    if high is None:
        high = len(L)
    if reverse:
        operator = op.le
    else:
        operator = op.ge

    while low < high:
        mid = (low+high)//2
        if operator(L[mid],K):
            high= mid
        else:
            low = mid + 1
            
    if low < N and operator(L[low],K):
        return low
    if high < N and operator(L[high],K):
        return high

    return -1
################### Upper Bound or Right most occurence ################################
def upper_bound(L,K,low=None,high=None,reverse=False):
    #pass
    """
        it returns the index where a[:i]<K and a[i:] >  , if no such element is present then it
        returns -1

        Parameters
        ----------
        L   : sequence,
        K   : element to be searched
        low : lower index of L, optional
        high : highest index of L, optional
        reverse : True if given sequence is in descending order, optional
    """
    #N = len(L)
    if low is None:
        low = 0
        Nl = low
    else:
        Nl = low

    if high is None:
        high = len(L)
        N=high
    else:
        N=high
    
    if reverse:
        operator = op.ge
    else:
        operator = op.le

    while low < high:
        mid = (low+high)//2
        if operator(L[mid] , K):
            low = mid + 1
        else:
            high = mid
    #print(f'{high}:high|| {low}:low')
    if high>=Nl and high<N and low <N and low >= Nl:
        return high
    return -1
