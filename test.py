import requests
res = requests.get('http://192.168.0.108:8080/audio.wav')
print res.text
