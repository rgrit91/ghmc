#pragma once

#include <ghmc/pms/conf.hh>
#include <ghmc/pms/dcs.hh>
#include <ghmc/pms/physics.hh>
#include <ghmc/utils/common.hh>


const inline auto t_ops = ghmc::pms::tensor_ops;

inline const auto kinetic_energies =
    torch::tensor({0.0010, 0.0012, 0.0014, 0.0017, 0.0020, 0.0025, 0.0030, 0.0035, 0.0040, 0.0045, 0.0050, 0.0055, 0.0060,
                   0.0070, 0.0080, 0.0090, 0.0100, 0.0120, 0.0140, 0.0170, 0.0200, 0.0250, 0.0300, 0.0350, 0.0400, 0.0450,
                   0.0500, 0.0550, 0.0600, 0.0700, 0.0800, 0.0900, 0.1000, 0.1200, 0.1400, 0.1700, 0.2000, 0.2500, 0.3000,
                   0.3500, 0.4000, 0.4500, 0.5000, 0.5500, 0.6000, 0.7000, 0.8000, 0.9000, 1.0000, 1.2000, 1.4000, 1.7000,
                   2.0000, 2.5000, 3.0000, 3.5000, 4.0000, 4.5000, 5.0000, 5.5000, 6.0000, 7.0000, 8.0000, 9.0000, 10.0000,
                   1000.0000, 1200.0000, 1400.0000, 900000.0000, 1000000.0000},
                  t_ops);

inline const auto recoil_energies = kinetic_energies * (ghmc::pms::X_FRACTION * 1.01);

inline const auto pumas_brems =
    torch::tensor({352.9348215307E-6, 286.7718941223E-6, 240.4519862562E-6, 192.4588745545E-6, 159.6466668098E-6,
                   123.4274388436E-6, 99.9843739402E-6, 83.6612857516E-6, 71.6916936800E-6, 62.5682521819E-6,
                   55.4022068771E-6, 49.6368995669E-6, 44.9066024221E-6, 37.6254613309E-6, 32.3026475538E-6,
                   28.2561804348E-6, 25.0851692221E-6, 20.4540638433E-6, 17.2520154935E-6, 13.9751689817E-6,
                   11.7627843855E-6, 9.3521795753E-6, 7.8130137010E-6, 6.7531677346E-6, 6.0012799192E-6,
                   5.4325212619E-6, 4.9875984493E-6, 4.6309865396E-6, 4.3394406565E-6, 3.8929552441E-6,
                   3.5688571350E-6, 3.3242993771E-6, 3.1341806290E-6, 2.8601038647E-6, 2.6744927428E-6,
                   2.4902486703E-6, 2.3713940981E-6, 2.2510940024E-6, 2.1831746981E-6, 2.1464426048E-6,
                   2.1308137080E-6, 2.1248004678E-6, 2.1249462868E-6, 2.1291544790E-6, 2.1360948698E-6,
                   2.1549577813E-6, 2.1773703493E-6, 2.2012887797E-6, 2.2256501286E-6, 2.2736780554E-6,
                   2.3193777151E-6, 2.3825923455E-6, 2.4396410027E-6, 2.5230542676E-6, 2.5947914078E-6,
                   2.6574721875E-6, 2.7129948224E-6, 2.7627427960E-6, 2.8077446739E-6, 2.8487819250E-6,
                   2.8864605050E-6, 2.9535614327E-6, 3.0118747653E-6, 3.0633141584E-6, 3.1092335552E-6,
                   4.2266267554E-6, 4.2340389812E-6, 4.2394135989E-6, 4.2731573230E-6, 4.2731628057E-6},
                  t_ops);

inline const auto pumas_brems_del =
    torch::tensor({3.8152246314E-7, 3.6692589344E-7, 3.5465549066E-7, 3.3931853270E-7, 3.2660091619E-7,
                   3.0935054928E-7, 2.9546704351E-7, 2.8389819276E-7, 2.7401660322E-7, 2.6541807083E-7,
                   2.5782782352E-7, 2.5104972664E-7, 2.4493965914E-7, 2.3431054498E-7, 2.2532207661E-7,
                   2.1757672444E-7, 2.1080439399E-7, 1.9946281688E-7, 1.9027935114E-7, 1.7929449259E-7,
                   1.7064309696E-7, 1.5964579131E-7, 1.5147796800E-7, 1.4518429211E-7, 1.4020245070E-7,
                   1.3617434687E-7, 1.3287205498E-7, 1.3013617362E-7, 1.2785120635E-7, 1.2431062049E-7,
                   1.2177552090E-7, 1.1995290795E-7, 1.1865166419E-7, 1.1713133343E-7, 1.1656123545E-7,
                   1.1675562952E-7, 1.1767772654E-7, 1.2002393564E-7, 1.2282278245E-7, 1.2577577100E-7,
                   1.2876279013E-7, 1.3171806136E-7, 1.3460753183E-7, 1.3741557416E-7, 1.4013502329E-7,
                   1.4530428837E-7, 1.5012951778E-7, 1.5463980280E-7, 1.5886669931E-7, 1.6658604001E-7,
                   1.7348747219E-7, 1.8262784801E-7, 1.9063057281E-7, 2.0208712686E-7, 2.1180685253E-7,
                   2.2024752288E-7, 2.2770649424E-7, 2.3438788132E-7, 2.4043815253E-7, 2.4596529019E-7,
                   2.5105210898E-7, 2.6014881097E-7, 2.6810395425E-7, 2.7516849252E-7, 2.8151900921E-7,
                   5.0473990504E-7, 5.0911090145E-7, 5.1253101781E-7, 5.4859269647E-7, 5.4861674714E-7},
                  t_ops);

inline const auto pumas_brems_cel =
    torch::tensor({0.0010383561E-7, 0.0011895853E-7, 0.0013334526E-7, 0.0015378050E-7, 0.0017306731E-7,
                   0.0020313641E-7, 0.0023109359E-7, 0.0025732727E-7, 0.0028211372E-7, 0.0030565926E-7,
                   0.0032812465E-7, 0.0034963748E-7, 0.0037030230E-7, 0.0040942068E-7, 0.0044602749E-7,
                   0.0048052878E-7, 0.0051323717E-7, 0.0057421755E-7, 0.0063044515E-7, 0.0070803100E-7,
                   0.0077952475E-7, 0.0088917429E-7, 0.0099072643E-7, 0.0108697512E-7, 0.0117970175E-7,
                   0.0127009287E-7, 0.0135899537E-7, 0.0144701635E-7, 0.0153460006E-7, 0.0170969751E-7,
                   0.0188608602E-7, 0.0206482614E-7, 0.0224655825E-7, 0.0262039813E-7, 0.0300915841E-7,
                   0.0362100222E-7, 0.0426669938E-7, 0.0541420626E-7, 0.0664442297E-7, 0.0795036143E-7,
                   0.0932620107E-7, 0.1076674868E-7, 0.1226746654E-7, 0.1382442677E-7, 0.1543415929E-7,
                   0.1880005080E-7, 0.2234448594E-7, 0.2605076521E-7, 0.2990511915E-7, 0.3801357350E-7,
                   0.4659608177E-7, 0.6023988904E-7, 0.7468633331E-7, 1.0027749633E-7, 1.2747562156E-7,
                   1.5604160482E-7, 1.8579932787E-7, 2.1661341084E-7, 2.4837681441E-7, 2.8100157583E-7,
                   3.1441554279E-7, 3.8337449972E-7, 4.5485906582E-7, 5.2856784444E-7, 6.0426503502E-7,
                   1337.4618087028E-7, 1629.5200148274E-7, 1924.1354275752E-7, 1429449.7100083840E-7,
                   1588479.6918941541E-7},
                  t_ops);

inline const auto pumas_pprod =
    torch::tensor({0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0230512071E-6, 0.1044209397E-6, 0.1895647248E-6,
                   0.2684476507E-6, 0.3403578760E-6, 0.4061558216E-6, 0.4668323209E-6, 0.5232329255E-6,
                   0.6257658605E-6, 0.7176301399E-6, 0.8013009467E-6, 0.8784344450E-6, 1.0174249240E-6,
                   1.1407425245E-6, 1.3040018373E-6, 1.4476162209E-6, 1.6551391505E-6, 1.8333902010E-6,
                   1.9899650414E-6, 2.1482984207E-6, 2.2958731981E-6, 2.4293736381E-6, 2.5514282487E-6,
                   2.6639470201E-6, 2.8658335252E-6, 3.0432681344E-6, 3.2016354152E-6, 3.3446777326E-6,
                   8.7080266378E-6, 8.8043492824E-6, 8.8781207286E-6, 9.5188228097E-6, 9.5194618152E-6},
                  t_ops);

inline const auto pumas_pprod_del =
    torch::tensor({0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0035896164E-7, 0.0179660782E-7, 0.0343826697E-7,
                   0.0504784663E-7, 0.0657749632E-7, 0.0802111813E-7, 0.0938570221E-7, 0.1067822738E-7,
                   0.1307913623E-7, 0.1527540725E-7, 0.1730565703E-7, 0.1919712895E-7, 0.2264409186E-7,
                   0.2573453488E-7, 0.2986115941E-7, 0.3351729628E-7, 0.3883511024E-7, 0.4343041791E-7,
                   0.4748530803E-7, 0.5156392758E-7, 0.5537215867E-7, 0.5883080462E-7, 0.6200323279E-7,
                   0.6493610616E-7, 0.7021652738E-7, 0.7487523552E-7, 0.7904651103E-7, 0.8282435718E-7,
                   2.3680370507E-7, 2.4015256993E-7, 2.4275382849E-7, 2.6693118389E-7, 2.6693895121E-7},
                  t_ops);

inline const auto pumas_pprod_cel =
    torch::tensor({0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000666268E-7, 0.0004271336E-7, 0.0009782624E-7,
                   0.0016644021E-7, 0.0024627240E-7, 0.0033575715E-7, 0.0043438303E-7, 0.0054116566E-7,
                   0.0077785805E-7, 0.0104260980E-7, 0.0133339526E-7, 0.0164783213E-7, 0.0234222264E-7,
                   0.0311536762E-7, 0.0440551541E-7, 0.0583364383E-7, 0.0847872344E-7, 0.1140888984E-7,
                   0.1458449860E-7, 0.1813262048E-7, 0.2193981324E-7, 0.2593533149E-7, 0.3010337010E-7,
                   0.3443152437E-7, 0.4352025476E-7, 0.5312383598E-7, 0.6318284846E-7, 0.7364986882E-7,
                   222.0708738716E-7, 270.8630718005E-7, 320.0237484794E-7, 232077.8997716235E-7,
                   257875.3358369932E-7},
                  t_ops);

inline const auto pumas_photo =
    torch::tensor({0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   2.0117941132E-6, 2.0159877188E-6, 2.0219557434E-6, 3.3920304681E-6, 3.4267689072E-6},
                  t_ops);

inline const auto pumas_photo_del =
    torch::tensor({0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0206363648E-7,
                   0.0497117329E-7, 0.1033431745E-7, 0.1610262406E-7, 0.2650801978E-7, 0.3559681641E-7,
                   0.4445654740E-7, 0.5375118127E-7, 0.6196272159E-7, 0.6930624398E-7, 0.7715098099E-7,
                   0.8381851702E-7, 0.9743956729E-7, 1.0838392005E-7, 1.2047000434E-7, 1.3112139131E-7,
                   1.6707753955E-7, 1.6864177029E-7, 1.7012011730E-7, 3.1629085902E-7, 3.1998795930E-7},
                  t_ops);

inline const auto pumas_photo_cel =
    torch::tensor({0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0224787375E-7,
                   0.0575355849E-7, 0.1280970008E-7, 0.2115064682E-7, 0.3750973238E-7, 0.5423508266E-7,
                   0.7203661115E-7, 0.9130362585E-7, 1.1032097126E-7, 1.2915035351E-7, 1.4904627205E-7,
                   1.6824069732E-7, 2.0808542743E-7, 2.4647523888E-7, 2.8695837242E-7, 3.2674748058E-7,
                   318.4006018020E-7, 386.9615884333E-7, 456.6460144580E-7, 583735.9398467693E-7,
                   656808.1075296142E-7},
                  t_ops);

inline const auto pumas_ion =
    torch::tensor({0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6, 0.0000000000E-6,
                   973.4801483682E-6, 1336.3502075436E-6, 1558.8528031187E-6, 1693.0776970408E-6,
                   1770.2153016876E-6, 1823.8608232588E-6, 1806.5709538037E-6, 1756.9239854528E-6,
                   1693.2788609283E-6, 1555.9540995311E-6, 1425.6151345391E-6, 1256.7871741867E-6,
                   1118.9245897098E-6, 942.2585432313E-6, 812.0049196460E-6, 712.6728589852E-6,
                   634.6587462368E-6, 571.8649480874E-6, 520.2802277719E-6, 477.1733502911E-6,
                   440.6263478421E-6, 382.0384654084E-6, 337.1618400066E-6, 301.6987212960E-6,
                   272.9737542574E-6, 3.1625211263E-6, 2.6456486590E-6, 2.2752021857E-6,
                   0.0041799924E-6, 0.0037736748E-6},
                  t_ops);

inline const auto pumas_ion_del =
    torch::tensor({0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   19.9811967558E-7, 48.5148815010E-7, 77.9447431047E-7, 105.9852006699E-7,
                   131.6121941410E-7, 174.5403943706E-7, 207.0176910728E-7, 230.8724528873E-7,
                   247.9932517906E-7, 268.0193517276E-7, 275.9509304174E-7, 275.7725819989E-7,
                   268.5605151754E-7, 251.0747518444E-7, 232.5266595997E-7, 215.1854085919E-7,
                   199.6050389978E-7, 185.7880831715E-7, 173.5680640506E-7, 162.7420636116E-7,
                   153.1163255772E-7, 136.8075534729E-7, 123.5627025846E-7, 112.6189419619E-7,
                   103.4366787628E-7, 1.3863189552E-7, 1.1600311761E-7, 0.9977797533E-7,
                   0.0018360416E-7, 0.0016575822E-7},
                  t_ops);

inline const auto pumas_ion_cel =
    torch::tensor({0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7, 0.0000000000E-7,
                   0.4113534906E-7, 1.1538234826E-7, 2.1072504926E-7, 3.2176643233E-7, 4.4430438207E-7,
                   7.1167131150E-7, 9.9493121584E-7, 12.8350497301E-7, 15.7111927005E-7, 21.3021311383E-7,
                   26.5794674504E-7, 33.8427051469E-7, 40.3606336921E-7, 49.8042166507E-7, 57.8142660026E-7,
                   64.7059175462E-7, 70.7127425555E-7, 76.0075129714E-7, 80.7198369693E-7, 84.9486708314E-7,
                   88.7709019802E-7, 95.4263797806E-7, 101.0440379547E-7, 105.8644464730E-7, 110.0562931331E-7,
                   190.7246272300E-7, 191.5870305519E-7, 192.3090521547E-7, 228.1833853786E-7, 228.8946252650E-7},
                  t_ops);

inline const auto pumas_screening =
    torch::tensor({263941.8043551634E-12, 25229.0955062119E-3, 69489.9376643440E-3, 200314.4303301968E-12, 21004.8660430631E-3,
                   57854.9013626336E-3, 159652.1645816686E-12, 17987.5905207192E-3, 49544.2471851106E-3, 120945.1155106489E-12,
                   14792.8762781173E-3, 40744.8634133405E-3, 96510.7117901196E-12, 12556.6251610720E-3, 34585.4293310906E-3,
                   71467.2810945657E-12, 10022.2936309955E-3, 27604.9753547506E-3, 56335.4344948835E-12, 8332.8287343564E-3,
                   22951.5857663429E-3, 46293.0631462798E-12, 7126.1442356962E-3, 19627.9457820327E-3, 39180.3620794513E-12,
                   6221.1970216378E-3, 17135.3980218898E-3, 33896.6986980178E-12, 5517.4075885725E-3, 15196.9106187053E-3,
                   29826.3600263350E-12, 4954.4282377363E-3, 13646.2644615220E-3, 26599.6774414996E-12, 4493.8558911540E-3,
                   12377.6837608763E-3, 23982.0486161536E-12, 4110.0884996114E-3, 11320.6513314204E-3, 19999.6934380507E-12,
                   3507.1347525148E-3, 9659.9014131402E-3, 17118.2398064168E-12, 3055.0455015505E-3, 8414.6861869149E-3,
                   14939.6944625748E-12, 2703.5310555458E-3, 7446.4898861412E-3, 13236.4282173294E-12, 2422.4176246162E-3,
                   6672.2031192178E-3, 10747.8625900122E-12, 2000.9883988857E-3, 5511.4365503671E-3, 9019.5079259313E-12,
                   1700.2367512476E-3, 4683.0591223428E-3, 7234.9520910026E-12, 1382.1968041354E-3, 3807.0635443737E-3,
                   6014.3328359712E-12, 1159.9656591228E-3, 3194.9596181670E-3, 4660.7818443660E-12, 908.7763116761E-3,
                   2503.0944622513E-3, 3777.3311828928E-12, 741.9796449300E-3, 2043.6768833708E-3, 3156.5938616366E-12,
                   623.3727654647E-3, 1716.9911859554E-3, 2697.4009781449E-12, 534.8566359980E-3, 1473.1861586441E-3,
                   2344.5498751711E-12, 466.3781686377E-3, 1284.5720076911E-3, 2065.3735120002E-12, 411.9070837663E-3,
                   1134.5391897770E-3, 1839.3117523853E-12, 367.6072265765E-3, 1012.5215647733E-3, 1652.7816733658E-12,
                   330.9222389461E-3, 911.4780096039E-3, 1363.6997453526E-12, 273.8275089588E-3, 754.2187362064E-3,
                   1150.8469111885E-12, 231.5963766026E-3, 637.8991180814E-3, 988.2441275232E-12, 199.2221015868E-3,
                   548.7288046937E-3, 860.4457681307E-12, 173.7066769280E-3, 478.4502143025E-3, 673.5578674851E-12,
                   136.2776285639E-3, 375.3572501884E-3, 544.6176959268E-12, 110.3699728748E-3, 303.9983154845E-3,
                   413.6564464421E-12, 83.9813785295E-3, 231.3147039910E-3, 326.4593403472E-12, 66.3663383587E-3,
                   182.7965934973E-3, 233.5935556363E-12, 47.5628604876E-3, 131.0051012177E-3, 176.2565520887E-12,
                   35.9285106000E-3, 98.9599473097E-3, 138.1493864824E-12, 28.1843591226E-3, 77.6297889102E-3,
                   111.4390640666E-12, 22.7500400500E-3, 62.6617337331E-3, 91.9446685628E-12, 18.7802455594E-3,
                   51.7275021976E-3, 77.2558626689E-12, 15.7868618748E-3, 43.4826546725E-3, 65.8981846628E-12,
                   13.4709151752E-3, 37.1037104987E-3, 56.9260702249E-12, 11.6404742748E-3, 32.0620226572E-3,
                   43.8140292800E-12, 8.9638026700E-3, 24.6895132891E-3, 34.8453632828E-12, 7.1317194454E-3,
                   19.6433019002E-3, 28.4303865739E-12, 5.8206020174E-3, 16.0320163385E-3, 23.6775539468E-12,
                   4.8487867961E-3, 13.3552902095E-3, 17.2267115053E-12, 3.5291460110E-3, 9.7205282786E-3,
                   13.1530953745E-12, 2.6953848418E-3, 7.4240523046E-3, 9.3619431540E-12, 1.9190891843E-3,
                   5.2858568694E-3, 7.0476899580E-12, 1.4450192593E-3, 3.9800990182E-3, 4.7832960308E-12,
                   0.9809960461E-3, 2.7020133987E-3, 3.4957571721E-12, 0.7170645779E-3, 1.9750518921E-3,
                   2.6894250864E-12, 0.5517372858E-3, 1.5196814959E-3, 2.1484969318E-12, 0.4408085870E-3,
                   1.2141442495E-3, 1.7664307663E-12, 0.3624476358E-3, 0.9983102093E-3, 1.4855481048E-12,
                   0.3048332156E-3, 0.8396195237E-3, 1.2723360510E-12, 0.2610956300E-3, 0.7191505953E-3,
                   1.1062001456E-12, 0.2270126829E-3, 0.6252739890E-3, 0.8665717855E-12, 0.1778486362E-3,
                   0.4898586492E-3, 0.7042474126E-12, 0.1445418880E-3, 0.3981199717E-3, 0.5884209869E-12,
                   0.1207742359E-3, 0.3326553708E-3, 0.5023855811E-12, 0.1031187436E-3, 0.2840258409E-3,
                   2.5452066662E-15, 5.2261946711E-7, 14.3948062596E-7, 2.1174527012E-15, 4.3478779466E-7,
                   11.9756083768E-7, 1.8127838396E-15, 3.7222924936E-7, 10.2525226592E-7, 2.7995761598E-18,
                   5.7486632456E-10, 15.8338712735E-10, 2.5196155817E-18, 5.1737910914E-10, 14.2504680892E-10},
                  t_ops);

inline const auto pumas_invlambda =
    torch::tensor({21058.1968122114, 19304.7498695864, 17828.5210308934, 16005.4087411307, 14531.7923590533, 12617.0933843515,
                   11166.0792498795, 10028.5383678760, 9112.8173033054, 8359.8196132003, 7729.7288525706, 7194.7389618559,
                   6734.8432518005, 5984.9150848004, 5399.4547846115, 4929.7544201862, 4544.6106646330, 3950.7084307689,
                   3514.2584512461, 3040.8018043866, 2702.4517469261, 2312.3267141951, 2048.6580470539, 1858.8864601312,
                   1716.0142080936, 1604.7518404191, 1515.7931877497, 1443.1502271039, 1382.7958976513, 1288.5135653624,
                   1218.5119258102, 1164.7062865488, 1122.2202235338, 1059.7887231779, 1016.5213140893, 972.4396076618,
                   943.0368518790, 911.7176873065, 892.4137203071, 879.6232786972, 870.6931126157, 864.2045886328,
                   859.3393581236, 855.5968983719, 852.6564550994, 848.3941957610, 845.5128439808, 843.4767683416,
                   841.9868771811, 840.0013217175, 838.7798155489, 837.6792848149, 837.0346276966, 836.4370827259,
                   836.1214042968, 835.9382752804, 835.8248724649, 835.7512364045, 835.7017073488, 835.6675045566,
                   835.6434233973, 835.6138686134, 835.5985106749, 835.5907183623, 835.5871766224, 835.7185262382,
                   835.7204794065, 835.7220040404, 835.7407982399, 835.7408389731},
                  t_ops);

inline const auto pumas_transport =
    torch::tensor({0.9999995300, 740390.1032768777E-11, 0.9999995638, 572021.6720737705E-11, 0.9999995883,
                   462414.1819398622E-11, 0.9999996143, 356197.4252197563E-11, 0.9999996327, 287948.1465090131E-11,
                   0.9999996536, 216749.6466553423E-11, 0.9999996676, 172947.6616624474E-11, 0.9999996777,
                   143466.1524375596E-11, 0.9999996852, 122345.2994040775E-11, 0.9999996911, 106505.3260720399E-11,
                   0.9999996958, 94203.2899575248E-11, 0.9999996997, 84382.3670166223E-11, 0.9999997029,
                   76366.0880472553E-11, 0.9999997081, 64076.9001338560E-11, 0.9999997121, 55106.6244724346E-11,
                   0.9999997152, 48275.8823157945E-11, 0.9999997178, 42903.5457962534E-11, 0.9999997218,
                   34999.7651634348E-11, 0.9999997250, 29469.4168747548E-11, 0.9999997286, 23721.4725873800E-11,
                   0.9999997314, 19766.9251638008E-11, 0.9999997351, 15359.4785285598E-11, 0.9999997380,
                   12470.2737517783E-11, 0.9999997405, 10434.4644260001E-11, 0.9999997425, 8925.4594847925E-11,
                   0.9999997443, 7764.1892434785E-11, 0.9999997459, 6844.3163535458E-11, 0.9999997473,
                   6098.7410345519E-11, 0.9999997486, 5483.0474692808E-11, 0.9999997508, 4527.9104230038E-11,
                   0.9999997526, 3823.8414184411E-11, 0.9999997541, 3285.4833639660E-11, 0.9999997554,
                   2862.0195857512E-11, 0.9999997574, 2242.1598182656E-11, 0.9999997590, 1814.0291925512E-11,
                   0.9999997608, 1378.7398384921E-11, 0.9999997621, 1088.6329086162E-11, 0.9999997636,
                   779.3896290742E-11, 0.9999997646, 588.3007305768E-11, 0.9999997653, 461.2279529823E-11,
                   0.9999997658, 372.1229955861E-11, 0.9999997662, 307.0704151909E-11, 0.9999997665,
                   258.0425871666E-11, 0.9999997668, 220.1263284086E-11, 0.9999997670, 190.1695754565E-11,
                   0.9999997673, 146.3829036194E-11, 0.9999997675, 116.4276038083E-11, 0.9999997677,
                   94.9989640802E-11, 0.9999997678, 79.1210889549E-11, 0.9999997680, 57.5685533984E-11,
                   0.9999997681, 43.9571358127E-11, 0.9999997682, 31.2885776987E-11, 0.9999997683,
                   23.5547625549E-11, 0.9999997684, 15.9871894913E-11, 0.9999997685, 11.6840722303E-11,
                   0.9999997685, 8.9891363400E-11, 0.9999997685, 7.1812040533E-11, 0.9999997686,
                   5.9042153195E-11, 0.9999997686, 4.9654048464E-11, 0.9999997686, 4.2527679626E-11,
                   0.9999997686, 3.6974740530E-11, 0.9999997686, 2.8965324166E-11, 0.9999997686,
                   2.3539698517E-11, 0.9999997687, 1.9668224863E-11, 0.9999997687, 1.6792496556E-11,
                   0.9999997687, 8.5077010000E-14, 0.9999997688, 7.0778760220E-14, 0.9999997688,
                   6.0594792928E-14, 0.9999997688, 9.3579812778E-17, 0.9999997688, 8.4221739944E-17},
                  t_ops);

inline const auto pumas_mu0 =
    torch::tensor({3.3381318832E-6, 3.3381325913E-6, 3.3290552783E-6, 3.3101311401E-6, 3.2904174200E-6, 3.2605981546E-6,
                   3.2356017042E-6, 3.2148584298E-6, 3.1975430984E-6, 3.1829506371E-6, 3.1705311644E-6, 3.1598636112E-6,
                   3.1506246629E-6, 3.1354839120E-6, 3.1236744471E-6, 3.1142750149E-6, 3.1066686650E-6, 3.0952454692E-6,
                   3.0872205152E-6, 3.0790567023E-6, 3.0737031497E-6, 3.0682080866E-6, 3.0650312274E-6, 3.0630968408E-6,
                   3.0618968247E-6, 3.0611683515E-6, 3.0607647875E-6, 3.0605986953E-6, 3.0606146995E-6, 3.0610558336E-6,
                   3.0619011972E-6, 3.0630445204E-6, 3.0644175630E-6, 3.0676752349E-6, 3.0714212410E-6, 3.0776391992E-6,
                   3.0843181909E-6, 3.0960333721E-6, 3.1081320463E-6, 3.1204023067E-6, 3.1327322642E-6, 3.1450586435E-6,
                   3.1573437811E-6, 3.1695643883E-6, 3.1817056649E-6, 3.2057152601E-6, 3.2293294968E-6, 3.2525309242E-6,
                   3.2753141633E-6, 3.3196319608E-6, 3.3623181295E-6, 3.4234042350E-6, 3.4811282415E-6, 3.5703644018E-6,
                   3.6515715031E-6, 3.7254679539E-6, 3.7927023816E-6, 3.8538623008E-6, 3.9094808213E-6, 3.9600420312E-6,
                   4.0059855714E-6, 4.0855798929E-6, 4.1510302370E-6, 4.2046364553E-6, 4.2482797290E-6, 1.4342676848E-6,
                   1.3163057996E-6, 1.2226773915E-6, 2.6283424996E-9, 2.3655055883E-9},
                  t_ops);

inline const auto pumas_lb_h =
    torch::tensor({6.4807778213E-4, 9.1504115689E-4, 12.2568593985E-4, 17.7247734278E-4, 24.1500114636E-4, 36.9533707016E-4,
                   52.3332056847E-4, 70.2468108413E-4, 90.6556169412E-4, 113.5239259153E-4, 138.8181551981E-4, 166.5063563547E-4,
                   196.5578935397E-4, 263.6337227301E-4, 339.8197769436E-4, 424.9020041259E-4, 518.6762079817E-4, 731.5262240457E-4,
                   976.8965264084E-4, 1402.9742832872E-4, 1894.9948452102E-4, 2851.6008287394E-4, 3966.2322257250E-4, 5226.4845732654E-4,
                   6622.0161620080E-4, 8144.1657239104E-4, 9785.6430346399E-4, 11540.2803223616E-4, 13402.8328782185E-4, 1.7434390282,
                   2.1851458178, 2.6632410998, 3.1760781632, 4.3011661433, 5.5531568041, 7.6594168629, 10.0315257083, 14.5617998755,
                   19.8019392300, 25.7451090693, 32.3876691642, 39.7275349231, 47.7634421747, 56.4945877772, 65.9204414390, 86.8549342342,
                   110.5651178249, 137.0500338809, 166.3091342265, 233.1486799928, 311.0822765053, 448.7826407376, 611.4421164672,
                   938.0048201110, 1333.8963185600, 1799.1162758394, 2333.6645401956, 2937.5410299337, 3610.7456930606, 4353.2784917321,
                   5165.1393967223, 6996.8454499004, 9105.8462803721, 11492.1715593134, 14155.8100097197, 1.3863218532E+8, 1.9969904149E+8,
                   2.7197643575E+8, 10.0000000000E+8, 10.0000000000E+8},
                  t_ops);

inline const auto pumas_soft_scatter =
    torch::tensor({53547078.1031543538E-10, 38491658.6960433871E-10, 29099850.4218928330E-10, 20445868.2057581805E-10, 15209001.0863913409E-10,
                   10126279.4432687685E-10, 7261245.8888447406E-10, 5481173.4544988209E-10, 4296353.1671342123E-10, 3466170.6059289528E-10,
                   2860849.5064532231E-10, 2405230.7274820702E-10, 2053268.6024948345E-10, 1552076.7390274813E-10, 1218675.5660514508E-10,
                   985112.4756497005E-10, 814796.2585874256E-10, 587453.6168225862E-10, 446191.8883539218E-10, 316307.9919330182E-10,
                   237727.3437513524E-10, 161271.7366723796E-10, 117920.4117787971E-10, 90773.2540091290E-10, 72538.9922101710E-10,
                   59635.4986295100E-10, 50128.3874372193E-10, 42894.9456379604E-10, 37245.3758030502E-10, 29069.6918188766E-10, 23507.7922951093E-10,
                   19524.0352385911E-10, 16555.2284909532E-10, 12471.1649768189E-10, 9830.4159125178E-10, 7292.7884869806E-10, 5680.5079817669E-10,
                   4025.8030349649E-10, 3031.9420257982E-10, 2380.4446590885E-10, 1925.7519157778E-10, 1594.0075924798E-10, 1343.6554155149E-10,
                   1149.5494941917E-10, 995.7017138519E-10, 769.6827244821E-10, 613.9675696394E-10, 501.8483895936E-10, 418.2909288550E-10,
                   304.0876242922E-10, 231.4309150282E-10, 163.4146067388E-10, 121.7321330028E-10, 80.9102338046E-10, 57.7686444481E-10, 43.3664984573E-10,
                   33.7852872026E-10, 27.0837912420E-10, 22.2098006040E-10, 18.5521778861E-10, 15.7359568829E-10, 11.7458604278E-10, 9.1107293667E-10,
                   7.2781123950E-10, 5.9513651092E-10, 16.7062416104E-14, 11.9502734379E-14, 8.9995079710E-14, 6.2343926851E-19, 5.1367741615E-19},
                  t_ops);