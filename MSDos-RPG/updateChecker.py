import requests
from requests.exceptions import ReadTimeout,HTTPError,RequestException
from easygui import exceptionbox,msgbox
ini = open("../settings.ini","r")
f = open("python.file","w")
ver = ini.readline()
try:
    response = requests.get("https://glgele.github.io/DreamBorderX/xml/MSDos-RPG.VersionCheck.file",timeout=1)
except ReadTimeout:
    try:
        response = requests.get("http://glgele.gitee.io/dreamborderx/xml/MSDos-RPG.VersionCheck.file",timeout=1)
    except ReadTimeout as err:
        exceptionbox(err,"MSDos-RPG")
        msgbox("Time Out!","MSDos-RPG")
    except HTTPError as err:
        exceptionbox(err,"MSDos-RPG")
        msgbox("HTTPError!","MSDos-RPG")
    except RequestException as err:
        exceptionbox(err,"MSDos-RPG")
        msgbox("RequestException!","MSDos-RPG")
except HTTPError as err:
    exceptionbox(err,"MSDos-RPG")
    msgbox("HTTPError!","MSDos-RPG")
except RequestException as err:
    exceptionbox(err,"MSDos-RPG")
    msgbox("RequestException!","MSDos-RPG")
f.write(response.text)
f.close()
ini.close()
print("UpdateChecker启动成功")