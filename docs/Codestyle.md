1) нейминг файлов, функций, структур, typedef начинается с "tn_" низким_змеинным_регистром, также любые внешние определения, которые не указаны.
2) нейминг defines, констант начинается с "TN_" ВЕРХНИМ_ЗМЕИННЫМ_РЕГИСТРОМ
2) любая API функция должна быть помечена как TN_API
3) каждый параметр API функции должен начинаться с новой строки и помечен модификатором _TN_IN... и задокументриван doxygen
4) название параметров функций начинается с _
5) нэйминг переменных низким_змеинным_регистром, параметры имеют приставку "_", указатели 
6) typedef alias помечаются суффиксом "_t"