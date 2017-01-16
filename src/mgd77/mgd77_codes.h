/* $Id$
 *
 * Code automatically generated by mgd77_codes.sh
 * To be included by mgd77info.c
 *
 * Copyright (c) 2005-2017 by P. Wessel
 * See README file for copying and redistribution conditions.
 */

/*!
 * \file mgd77_codes.h
 * \brief  
 */

#define MGD77_N_AGENCIES 53
#define MGD77_N_VESSELS 444

struct MGD77_AGENCY {
	char code[4];
	char name[80];
};

static struct MGD77_AGENCY MGD77_agency[MGD77_N_AGENCIES] = {
	{"01", "LAMONT (LDEO)"},
	{"02", "WOODS HOLE O.I."},
	{"03", "NOAA"},
	{"04", "US ARMY"},
	{"05", "NEW ZEALAND"},
	{"06", "US GEOL. SURVEY"},
	{"07", "OREGON ST. UNIV"},
	{"08", "U.HAWAII SOEST"},
	{"09", "US NAVY"},
	{"10", "UNIV OF TEXAS"},
	{"11", "RICE UNIV."},
	{"12", "CANADA"},
	{"13", "UNIV OF CONN."},
	{"14", "U.MIAMI (RSMAS)"},
	{"15", "SCRIPPS INST.OC"},
	{"16", "CHINA"},
	{"17", "U RHODE ISLAND"},
	{"18", "DUKE UNIVERSITY"},
	{"19", "UNITED KINGDOM"},
	{"20", "U.WASHINGTON"},
	{"22", "WESTERN GEOPHY."},
	{"23", "TEXAS A&M UNIV."},
	{"24", "AUSTRALIA"},
	{"25", "MONACO"},
	{"29", "RUSSIA"},
	{"30", "SPAIN"},
	{"35", "NIMA"},
	{"58", "NETHERLANDS"},
	{"60", "MIN MGMT SVC"},
	{"63", "ISRAEL"},
	{"67", "FRANCE"},
	{"71", "SOUTH AFRICA"},
	{"75", "US COAST GUARD"},
	{"76", "BRAZIL"},
	{"77", "INT. GRAV. BUR"},
	{"83", "GERMANY"},
	{"84", "ORSTOM NEW CAL"},
	{"86", "CUBA"},
	{"87", "ARGENTINA"},
	{"88", "US NSF"},
	{"89", "INDIA"},
	{"90", "PORTUGAL"},
	{"92", "FINLAND"},
	{"93", "CHILE"},
	{"J1", "HYDR DEPT JAPAN"},
	{"J2", "GEOL SRVY JAPAN"},
	{"J4", "UNIV TOKYO"},
	{"J5", "KOBE UNIV"},
	{"J7", "UNIV OF RYUKYUS"},
	{"J8", "J.O.D.C. JAPAN"},
	{"J9", "CHIBA UNIV"},
	{"JA", "INST.POLAR RES."},
	{"ZZ", "INST NOT CODED"},
};

struct MGD77_VESSEL {
	int agent;
	char code[8];
	char name[80];
};

static struct MGD77_VESSEL MGD77_vessel[MGD77_N_VESSELS] = {
	{ 0, "0101", "CONRAD"},
	{ 0, "0102", "ELTANIN"},
	{ 0, "0103", "VEMA"},
	{ 0, "0109", "ZAPIOLA"},
	{ 0, "0110", "MOANA WAVE"},
	{ 0, "0115", "EASTWARD"},
	{ 0, "0118", "ENDEAVOR"},
	{ 0, "0121", "MAURICE EWING"},
	{ 0, "0123", "POLAR DUKE"},
	{ 0, "0124", "SALERUM"},
	{ 0, "0199", "SHIP UNKNOWN"},
	{ 1, "0201", "CHAIN"},
	{ 1, "0202", "ATLANTIS II"},
	{ 1, "0203", "KNORR"},
	{ 1, "0213", "ATLANTIS"},
	{ 1, "0216", "BESNARD"},
	{ 1, "0221", "BEAR"},
	{ 1, "0222", "LULU"},
	{ 1, "0223", "YAMACRAW"},
	{ 1, "0227", "OCEANUS"},
	{ 1, "0230", "FAY"},
	{ 1, "0231", "FLORENCE"},
	{ 1, "0234", "S.A.AGULHAS"},
	{ 1, "0235", "POLAR DUKE"},
	{ 1, "0236", "ICE FLOE"},
	{ 2, "0300", "MULTIPLE SHIP"},
	{ 2, "0301", "PIONEER"},
	{ 2, "0302", "SURVEYOR"},
	{ 2, "0303", "DISCOVERER"},
	{ 2, "0304", "OCEANOGRAPHER"},
	{ 2, "0305", "PATHFINDER"},
	{ 2, "0307", "HYDROGRAPHER"},
	{ 2, "0308", "WHITING"},
	{ 2, "0309", "MT. MITCHELL"},
	{ 2, "0310", "RAINIER"},
	{ 2, "0311", "RESEARCHER"},
	{ 2, "0312", "FAIRWEATHER"},
	{ 2, "0314", "PEIRCE"},
	{ 2, "0318", "DAVIDSON"},
	{ 2, "0323", "VENTURE"},
	{ 2, "0324", "OREGON II"},
	{ 2, "0375", "RONALD H BROWN"},
	{ 2, "0399", "SHIP UNKNOWN"},
	{ 3, "0499", "SHIP UNKNOWN"},
	{ 4, "0501", "TANGAROA"},
	{ 4, "0504", "MONOWAI"},
	{ 4, "0505", "HMNZS ENDEAVOUR"},
	{ 4, "0506", "TARANUI"},
	{ 4, "0507", "TUI I"},
	{ 4, "0508", "TUI II"},
	{ 4, "0509", "STATEN ISLAND"},
	{ 4, "0512", "USCG POLAR STAR"},
	{ 5, "0601", "UNITED GEO I"},
	{ 5, "0603", "POLARIS"},
	{ 5, "0604", "OIL CITY"},
	{ 5, "0605", "SAMUEL P. LEE"},
	{ 5, "0606", "GEAR"},
	{ 5, "0607", "ATLANTIC TWIN"},
	{ 5, "0610", "KANA KEOKI"},
	{ 5, "0611", "SEA SOUNDER"},
	{ 5, "0612", "KARLUK"},
	{ 5, "0613", "ASTERIAS"},
	{ 5, "0614", "BARTLETT"},
	{ 5, "0615", "BURTON ISLAND"},
	{ 5, "0616", "GLACIER"},
	{ 5, "0617", "DAVIS"},
	{ 5, "0618", "DOLPHIN"},
	{ 5, "0619", "GOSNOLD"},
	{ 5, "0620", "GULF SEAL"},
	{ 5, "0621", "KELEZ"},
	{ 5, "0622", "PHIPPS"},
	{ 5, "0623", "STORIS"},
	{ 5, "0625", "DISCOVERER"},
	{ 5, "0626", "MT. MITCHELL"},
	{ 5, "0627", "ATLANTIS II"},
	{ 5, "0628", "FAY"},
	{ 5, "0634", "CECIL H. GREEN"},
	{ 5, "0635", "T.THOMPSON"},
	{ 5, "0638", "SURVEYOR"},
	{ 5, "0650", "SIO UTIL. BOAT"},
	{ 5, "0651", "VELERO IV"},
	{ 5, "0655", "PARIZEAU"},
	{ 5, "0661", "GILLISS"},
	{ 5, "0678", "FARNELLA"},
	{ 5, "0682", "JOHNSTON"},
	{ 5, "0685", "HUSKY III"},
	{ 5, "0688", "CARMEL"},
	{ 5, "0689", "NUNATAK"},
	{ 5, "0690", "GROWLER"},
	{ 5, "0691", "POWELL"},
	{ 5, "0692", "AGNICH"},
	{ 5, "0693", "MENDOCINO"},
	{ 5, "0697", "SEISMIC EXPLORE"},
	{ 5, "0699", "SHIP UNKNOWN"},
	{ 6, "0701", "YAQUINA"},
	{ 6, "0702", "BERTHA ANN"},
	{ 6, "0703", "YOCONA"},
	{ 6, "0704", "SURVEYOR"},
	{ 6, "0705", "AVOYEL"},
	{ 6, "0706", "ACONA"},
	{ 6, "0708", "WECOMA"},
	{ 6, "0712", "DM-12"},
	{ 6, "0715", "MATAMOROS"},
	{ 6, "0727", "ALTAIR"},
	{ 7, "0801", "KANA KEOKI"},
	{ 7, "0802", "MOANA WAVE"},
	{ 7, "0804", "MAHI"},
	{ 7, "0805", "MACHIAS"},
	{ 7, "0806", "TARANUI"},
	{ 7, "0807", "NOII"},
	{ 7, "0808", "ACHERON"},
	{ 7, "0809", "RAVAKAI"},
	{ 7, "0810", "ATA"},
	{ 7, "0811", "ENDEAVOR"},
	{ 7, "0815", "VAUBAN"},
	{ 8, "0900", "MULTIPLE SHIP"},
	{ 8, "0901", "RUTH ANN"},
	{ 8, "0902", "SANTA MARIA"},
	{ 8, "0903", "SILAS BENT"},
	{ 8, "0904", "HUNT"},
	{ 8, "0905", "KANE"},
	{ 8, "0906", "SAN PABLO"},
	{ 8, "0907", "ARCTIC SEAL"},
	{ 8, "0908", "ATLANTIC SEAL"},
	{ 8, "0909", "GIBBS"},
	{ 8, "0910", "KEATHLEY"},
	{ 8, "0911", "SHOUP"},
	{ 8, "0912", "DUTTON"},
	{ 8, "0913", "BOWDITCH"},
	{ 8, "0916", "SURVEYOR"},
	{ 8, "0926", "LYNCH"},
	{ 8, "0934", "BURTON ISLAND"},
	{ 8, "0935", "WESTWIND"},
	{ 8, "0937", "NORTHWIND"},
	{ 8, "0938", "EASTWIND"},
	{ 8, "0945", "SANDS"},
	{ 8, "0961", "EDISTO"},
	{ 8, "0962", "BARTLETT"},
	{ 8, "0963", "DESTEIGUER"},
	{ 8, "0967", "SOUTHWIND"},
	{ 8, "0976", "MIZAR"},
	{ 8, "0977", "HAYES"},
	{ 8, "0978", "WILKES"},
	{ 8, "0986", "TAHITI SEAHORSE"},
	{ 8, "0987", "USCGC POLAR SEA"},
	{ 8, "0988", "LANEY CHOUEST"},
	{ 8, "0999", "SHIP UNKNOWN"},
	{ 9, "1002", "IDA GREEN"},
	{ 9, "1005", "FRED H. MOORE"},
	{ 10, "1101", "GLACIER"},
	{ 11, "1201", "LABRADOR"},
	{ 11, "1202", "THETA"},
	{ 11, "1203", "BAFFIN"},
	{ 11, "1204", "HUDSON"},
	{ 11, "1205", "DAWSON"},
	{ 11, "1207", "ENDEAVOR"},
	{ 11, "1208", "SACKVILLE"},
	{ 11, "1209", "PARIZEAU"},
	{ 11, "1215", "MINNA"},
	{ 11, "1216", "MARTIN KARLSEN"},
	{ 11, "1217", "PRINCE"},
	{ 11, "1219", "NARWHAL"},
	{ 11, "1221", "MAXWELL"},
	{ 11, "1222", "PORT DAUPHIN"},
	{ 11, "1223", "LAYMORE"},
	{ 11, "1224", "LIMNOS"},
	{ 11, "1299", "SHIP UNKNOWN"},
	{ 12, "1301", "GLACIER"},
	{ 12, "1302", "BURTON ISLAND"},
	{ 12, "1303", "T-441"},
	{ 13, "1401", "GERDA"},
	{ 13, "1403", "GILLISS"},
	{ 13, "1404", "PILSBURY"},
	{ 14, "1501", "ARGO"},
	{ 14, "1502", "MELVILLE"},
	{ 14, "1503", "E.B. SCRIPPS"},
	{ 14, "1504", "THOM WASHINGTON"},
	{ 14, "1505", "GLOMAR CHALLENG"},
	{ 14, "1506", "BAIRD"},
	{ 14, "1507", "H M SMITH"},
	{ 14, "1508", "HORIZON"},
	{ 14, "1509", "STRANGER"},
	{ 14, "1510", "AGASSIZ"},
	{ 14, "1512", "DAVIS"},
	{ 14, "1513", "OCONOSTOTA"},
	{ 14, "1514", "EXPLORER"},
	{ 14, "1515", "HUNT"},
	{ 14, "1516", "PIONEER"},
	{ 14, "1517", "SEIFU MARU"},
	{ 14, "1518", "SILAS BENT"},
	{ 14, "1519", "VELERO IV"},
	{ 14, "1520", "T.B. DAVIE"},
	{ 14, "1524", "KANA KEOKI"},
	{ 14, "1527", "WECOMA"},
	{ 14, "1528", "NEW HORIZON"},
	{ 14, "1532", "GYRE"},
	{ 14, "1534", "KNORR"},
	{ 14, "1535", "POLAR DUKE"},
	{ 14, "1536", "ROCKAWAY (USCG)"},
	{ 14, "1537", "LANEY CHOUEST"},
	{ 14, "1538", "ROBERT SPROUL"},
	{ 14, "1539", "ROGER REVELLE"},
	{ 15, "1601", "XIANGYANGHONG 5"},
	{ 15, "1603", "HAI YANG-4"},
	{ 15, "1604", "XIANGYANGHONG 9"},
	{ 15, "1605", "EXPERIMENT NO.3"},
	{ 15, "1606", "OCEAN NO.4"},
	{ 15, "1607", "SCIENCE NO.1"},
	{ 15, "1699", "SHIP UNKNOWN"},
	{ 16, "1701", "TRIDENT"},
	{ 16, "1703", "ENDEAVOR"},
	{ 16, "1708", "ATLANTIS II"},
	{ 16, "1710", "KNORR"},
	{ 16, "1712", "CONRAD"},
	{ 17, "1801", "EASTWARD"},
	{ 18, "1902", "HMS OWEN"},
	{ 18, "1903", "HMS HECLA"},
	{ 18, "1904", "HMS DALRYMPLE"},
	{ 18, "1905", "SHACKLETON"},
	{ 18, "1910", "DISCOVERY"},
	{ 18, "1911", "STARELLA"},
	{ 18, "1912", "FARNELLA"},
	{ 18, "1915", "HMS ENDURANCE"},
	{ 18, "1916", "HMS FOX"},
	{ 18, "1917", "HMS HERALD"},
	{ 18, "1918", "CHARLES DARWIN"},
	{ 18, "1919", "HMS EDINBURGH"},
	{ 18, "1920", "MV MAIRANGI BAY"},
	{ 18, "1921", "HMS OPOSSUM"},
	{ 18, "1922", "HMY BRITANNIA"},
	{ 18, "1923", "SS BELAIS"},
	{ 18, "1924", "MT STOLT ACCORD"},
	{ 18, "1925", "HMS EXETER"},
	{ 18, "1926", "PH JEANNE D'ARC"},
	{ 18, "1927", "HMS GLOUCESTER"},
	{ 18, "1928", "RRS JOHN BISCOE"},
	{ 18, "1929", "MV N. COLOMBO"},
	{ 18, "1930", "NZ WAITANGI"},
	{ 18, "1931", "MT SATUCKET"},
	{ 18, "1932", "HMS ACHILLES"},
	{ 18, "1933", "HMS CHARYBDIS"},
	{ 18, "1934", "HMAS DERWENT"},
	{ 18, "1935", "HMS SCYLLA"},
	{ 18, "1936", "MV GARTH"},
	{ 18, "1937", "HMS MANCHESTER"},
	{ 18, "1938", "MOBIL ENDURANCE"},
	{ 18, "1939", "HMS SOUTHAMPTON"},
	{ 18, "1940", "HMS PENELOPE"},
	{ 18, "1941", "MV YORKSHIRE"},
	{ 18, "1942", "RRS BRANSFIELD"},
	{ 18, "1943", "POLAR CIRCLE"},
	{ 18, "1944", "HMS COVENTRY"},
	{ 18, "1945", "HMS NORFOLK"},
	{ 18, "1946", "HMS BOXER"},
	{ 18, "1947", "HMS INVINCIBLE"},
	{ 18, "1948", "HMAS TOBRUK"},
	{ 18, "1949", "HMS BEAVER"},
	{ 18, "1950", "HMS ARK ROYAL"},
	{ 18, "1951", "HMS HECATE"},
	{ 18, "1952", "HMAS TORRENS"},
	{ 18, "1953", "HMS BEAGLE"},
	{ 18, "1954", "STENA SEASPREAD"},
	{ 18, "1955", "HMS FAWN"},
	{ 18, "1956", "SS LEONIA"},
	{ 18, "1957", "MV REMUERA BAY"},
	{ 18, "1958", "RESOLUTION BAY"},
	{ 18, "1959", "HMS BIRMINGHAM"},
	{ 18, "1960", "MV WORLD EDEN"},
	{ 18, "1961", "HMS AMBUSCADE"},
	{ 18, "1962", "RFA FORT AUSTIN"},
	{ 18, "1963", "MV SCOTT UNITY"},
	{ 18, "1964", "LT RELUME"},
	{ 18, "1965", "HMS AVENGER"},
	{ 18, "1966", "HMS HYDRA"},
	{ 18, "1967", "MV KOWLOON BAY"},
	{ 18, "1968", "PETROBULK JAGU."},
	{ 18, "1969", "MT STOLT HINYK"},
	{ 18, "1970", "HMS CORNWALL"},
	{ 18, "1971", "MV MEDIC"},
	{ 18, "1972", "JAMES C. ROSS"},
	{ 18, "1976", "HMS ARROW"},
	{ 18, "1977", "MV HAMPSHIRE"},
	{ 18, "1978", "HMAS WESTRALIA"},
	{ 18, "1979", "BGS"},
	{ 18, "1980", "HMS EURYALUS"},
	{ 18, "1981", "HMS BRAZEN"},
	{ 18, "1982", "HMS ROEBUCK"},
	{ 18, "1983", "SIR PERCIVALE"},
	{ 18, "1984", "HMS FEARLESS"},
	{ 18, "1985", "HMS LIVERPOOL"},
	{ 18, "1986", "HMS MONTROSE"},
	{ 18, "1987", "HMS HERMIONE"},
	{ 18, "1988", "HMS ILLUSTRIOUS"},
	{ 18, "1989", "MV EDYTH L"},
	{ 18, "1990", "MONMOUTH"},
	{ 18, "1991", "SELETAR SPIRIT"},
	{ 18, "1992", "HMS SUTHERLAND"},
	{ 18, "1993", "MV OXFORDSHIRE"},
	{ 18, "1994", "HMS OCEAN"},
	{ 18, "1995", "MV BALTIC EAGLE"},
	{ 18, "1996", "ZAKHAR SOROKIN"},
	{ 18, "1997", "HMAS SYDNEY"},
	{ 18, "1998", "HMAS SUCCESS"},
	{ 18, "1999", "SHIP UNKNOWN"},
	{ 18, "19A0", "CONTSHIP ROME"},
	{ 18, "19A1", "BRIT. ADVENTURE"},
	{ 18, "19A2", "CALEDONIAN STAR"},
	{ 18, "19A3", "MV PATRIS"},
	{ 19, "2001", "T.THOMPSON"},
	{ 19, "2002", "OCEANEER"},
	{ 19, "2039", "KNORR"},
	{ 20, "2201", "WESTERN SEA"},
	{ 21, "2306", "JOIDES RESOLUTI"},
	{ 21, "2307", "PROTON"},
	{ 21, "2309", "BIN HAI"},
	{ 21, "2312", "KNORR"},
	{ 22, "2405", "RIG SEISMIC"},
	{ 22, "2406", "NELLA DAN"},
	{ 22, "2407", "CAPE PILLAR"},
	{ 22, "2410", "FRANKLIN"},
	{ 22, "2411", "AURORAAUSTRALIS"},
	{ 23, "2501", "CALYPSO"},
	{ 24, "2901", "MIKH. LOMONOSOV"},
	{ 24, "2902", "VITYAZ"},
	{ 24, "2903", "PEGAS"},
	{ 24, "2904", "DM MENDELEEV"},
	{ 24, "2905", "AK KURCHATOV"},
	{ 24, "2909", "AK M.KELDYSH"},
	{ 24, "2911", "PRO.GAGARINSKIY"},
	{ 24, "2912", "MORSKOY GOEFIZ."},
	{ 24, "2913", "KIREEV"},
	{ 24, "2914", "STARATELNI"},
	{ 24, "2915", "AK S.VAVILOV"},
	{ 24, "2916", "AK N.STRAKHOV"},
	{ 24, "2918", "OB"},
	{ 24, "2919", "AK VINOGRADOV"},
	{ 24, "2926", "AK IOFFE"},
	{ 24, "2999", "SHIP UNKNOWN"},
	{ 25, "3006", "HESPERIDES"},
	{ 26, "3501", "BARTLETT"},
	{ 26, "3502", "G.W.PIERCE"},
	{ 26, "3503", "VIRGINIA KEY"},
	{ 26, "3504", "HARKNESS"},
	{ 26, "3505", "KANE"},
	{ 26, "3506", "HAYES"},
	{ 26, "3507", "BESNARD"},
	{ 26, "3508", "CHAUVENET"},
	{ 26, "3509", "WILKES"},
	{ 26, "3510", "RESEARCHER"},
	{ 26, "3511", "PEIRCE"},
	{ 26, "3512", "WHITING"},
	{ 26, "3513", "MT. MITCHELL"},
	{ 26, "3514", "T.CROMWELL"},
	{ 26, "3515", "OCEANOGRAPHER"},
	{ 26, "3516", "D.S.JORDAN"},
	{ 26, "3517", "FAIRWEATHER"},
	{ 26, "3518", "DISCOVERER"},
	{ 26, "3519", "ALPHA HELIX"},
	{ 26, "3520", "VISSEL LCM-6"},
	{ 26, "3521", "LYNCH"},
	{ 26, "3522", "VESSEL TRB-4"},
	{ 26, "3523", "MAUII"},
	{ 26, "3524", "CRAWFORD"},
	{ 26, "3525", "HUNT"},
	{ 26, "3527", "T.THOMPSON"},
	{ 26, "3528", "USNS J.G.KELLAR"},
	{ 26, "3529", "WYMAN"},
	{ 26, "3530", "GIBBS"},
	{ 26, "3531", "SILAS BENT"},
	{ 26, "3532", "MIZAR"},
	{ 26, "3533", "DESTEIGUER"},
	{ 26, "3534", "SHOUP"},
	{ 26, "3535", "GEOPH.CORP.AK"},
	{ 26, "3536", "SAN PABLO"},
	{ 26, "3537", "LONGLINES"},
	{ 26, "3538", "HARSAP"},
	{ 26, "3539", "DELTA EXPL.CO."},
	{ 26, "3540", "HERO"},
	{ 26, "3599", "SHIP UNKNOWN"},
	{ 27, "5801", "SNELLIUS"},
	{ 27, "5802", "BUYSKES"},
	{ 27, "5803", "TYDEMAN"},
	{ 27, "5804", "HNLMS LUYMES"},
	{ 28, "6000", "MULTIPLE SHIP"},
	{ 28, "6009", "SEISMIC EXPLORE"},
	{ 28, "6010", "P. LANGEVIN III"},
	{ 28, "6011", "LIBERTY STAR"},
	{ 28, "6050", "AGNICH"},
	{ 29, "6301", "R/V SHIKMONA"},
	{ 30, "6701", "JEAN CHARCOT"},
	{ 30, "6702", "NOROIT"},
	{ 30, "6703", "LE SUROIT"},
	{ 30, "6706", "MARION-DUFRESNE"},
	{ 30, "6708", "L ATALANTE"},
	{ 31, "7101", "RSA"},
	{ 31, "7102", "THOMAS B DAVIE"},
	{ 31, "7103", "MEIRING NAUDE"},
	{ 31, "7104", "AGULHAS"},
	{ 31, "7105", "PROTEA"},
	{ 32, "7508", "HEALY"},
	{ 33, "7602", "BARAO DE TEFFE"},
	{ 33, "7603", "ALMIR. CAMARA"},
	{ 33, "7604", "SIRIUS"},
	{ 34, "7701", "METEOR"},
	{ 34, "7702", "KOMET"},
	{ 34, "7703", "VITYAZ"},
	{ 34, "7799", "SHIP UNKNOWN"},
	{ 35, "8303", "SONNE"},
	{ 35, "8304", "GAUSS"},
	{ 35, "8305", "METEOR"},
	{ 35, "8306", "R/V PLANET"},
	{ 35, "8307", "POLARSTERN"},
	{ 35, "8315", "HEINCKE"},
	{ 36, "8401", "CORIOLIS"},
	{ 36, "8402", "NOROIT"},
	{ 37, "8699", "SHIP UNKNOWN"},
	{ 38, "8701", "ALMIR. IRIZAR"},
	{ 38, "8702", "PUERTO DESEADO"},
	{ 39, "8801", "NATHANIELPALMER"},
	{ 40, "8901", "SKANDI SURVEYOR"},
	{ 40, "8902", "FARNELLA"},
	{ 40, "8903", "GA REAY"},
	{ 41, "9099", "SHIP UNKNOWN"},
	{ 42, "9201", "ARANDA"},
	{ 43, "9301", "AGORVIDALGORMAZ"},
	{ 44, "J101", "TAKUYO"},
	{ 44, "J102", "SHOYO"},
	{ 44, "J103", "MEIYO"},
	{ 44, "J106", "SYOYO"},
	{ 45, "J201", "HAKUREI-MARU"},
	{ 45, "J202", "M/V NATSUSHIMA"},
	{ 46, "J401", "HAKUHO MARU"},
	{ 46, "J403", "UMITAKA MARU"},
	{ 47, "J501", "DAIEI-MARU"},
	{ 47, "J502", "KOFU-MARU"},
	{ 47, "J599", "SHIP UNKNOWN"},
	{ 48, "J701", "NAGASAKI MARU"},
	{ 49, "J801", "FUJI"},
	{ 49, "J802", "SHIRASE"},
	{ 50, "J901", "WAKASHIO"},
	{ 50, "J902", "DAIGO KAIKO"},
	{ 50, "J903", "TOKAIDAIGAKU II"},
	{ 51, "JA01", "SHIRASE"},
	{ 52, "ZZZZ", "SHIP NOT CODED"},
};
