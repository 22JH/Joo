#!bin/bash/

git ls-files -o -i --exclude-standard

#git ls-files -> 추적되는 파일
#-o(others) -i(ignored) ->무시된 파일 포함
# --stand-exclude -> 표준 출력 제외
