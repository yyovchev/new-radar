# SkyNetFeeder
SkynetFeeder е софтуер съвместим с Windows и Linux, който декодира Automatic
dependent surveillance – broadcast (ADS-B) протокол, приеман посредством TV
тунер. Тунерът предварително се настройва на 1090 MHz – честотата на която
излъчват самолетите.
Декодирането на ADS-B съобщенията се извършва побитово на С++, като всеки
бит или група от битове отговоря за различна част от информацията.
Съобщенията се разделят на четири основни групи: 1) идентификация на
самолета, 2) позиция на самолета докато е на пистата, 3) позиция на самолета в
полет и 4) посока, скорост и вертикална скорост на самолета. След като се
декодира информацията се събира в локална SQLite база данни.
В софтуера е предвидена възможност потребителя да зададе координати на
приемната антена за да може програмата да изобрази самолетите във вид на
радар
