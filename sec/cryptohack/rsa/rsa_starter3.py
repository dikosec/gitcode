p = 857504083339712752489993810777
q = 1029224947942998075080348647219

def euler_totient(p,q):
    return (p-1)*(q-1)

print(euler_totient(p,q))