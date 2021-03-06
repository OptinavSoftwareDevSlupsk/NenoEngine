#include "pch.h"
#include "Color.h"

namespace Neno
{
	namespace Core
	{
		//Pre-Defined colors
		Color Color::Transparent(0, 0, 0, 0);
		Color Color::White(255, 255, 255);
		Color Color::AliceBlue(240, 248, 255, 255);
		Color Color::AntiqueWhite(250, 235, 215, 255);
		Color Color::Aqua(0, 255, 255, 255);
		Color Color::Aquamarine(127, 255, 212, 255);
		Color Color::Azure(240, 255, 255, 255);
		Color Color::Beige(245, 245, 220, 255);
		Color Color::Bisque(255, 228, 196, 255);
		Color Color::Black(0, 0, 0, 255);
		Color Color::BlanchedAlmond(255, 235, 205, 255);
		Color Color::Blue(0, 0, 255, 255);
		Color Color::BlueViolet(138, 43, 226, 255);
		Color Color::Brown(165, 42, 42, 255);
		Color Color::BurlyWood(222, 184, 135, 255);
		Color Color::CadetBlue(95, 158, 160, 255);
		Color Color::Chartreuse(127, 255, 0, 255);
		Color Color::Chocolate(210, 105, 30, 255);
		Color Color::Coral(255, 127, 80, 255);
		Color Color::CornflowerBlue(100, 149, 237, 255);
		Color Color::Cornsilk(255, 248, 220, 255);
		Color Color::Crimson(220, 20, 60, 255);
		Color Color::Cyan(0, 255, 255, 255);
		Color Color::DarkBlue(0, 0, 139, 255);
		Color Color::DarkCyan(0, 139, 139, 255);
		Color Color::DarkGoldenrod(184, 134, 11, 255);
		Color Color::DarkGray(169, 169, 169, 255);
		Color Color::DarkGreen(0, 100, 0, 255);
		Color Color::DarkKhaki(189, 183, 107, 255);
		Color Color::DarkMagenta(139, 0, 139, 255);
		Color Color::DarkOliveGreen(85, 107, 47, 255);
		Color Color::DarkOrange(255, 140, 0, 255);
		Color Color::DarkOrchid(153, 50, 204, 255);
		Color Color::DarkRed(139, 0, 0, 255);
		Color Color::DarkSalmon(233, 150, 122, 255);
		Color Color::DarkSeaGreen(143, 188, 139, 255);
		Color Color::DarkSlateBlue(72, 61, 139, 255);
		Color Color::DarkSlateGray(47, 79, 79, 255);
		Color Color::DarkTurquoise(0, 206, 209, 255);
		Color Color::DarkViolet(148, 0, 211, 255);
		Color Color::DeepPink(255, 20, 147, 255);
		Color Color::DeepSkyBlue(0, 191, 255, 255);
		Color Color::DimGray(105, 105, 105, 255);
		Color Color::DodgerBlue(30, 144, 255, 255);
		Color Color::Firebrick(178, 34, 34, 255);
		Color Color::FloralWhite(255, 250, 240, 255);
		Color Color::ForestGreen(34, 139, 34, 255);
		Color Color::Fuchsia(255, 0, 255, 255);
		Color Color::Gainsboro(220, 220, 220, 255);
		Color Color::GhostWhite(248, 248, 255, 255);
		Color Color::Gold(255, 215, 0, 255);
		Color Color::Goldenrod(218, 165, 32, 255);
		Color Color::Gray(128, 128, 128, 255);
		Color Color::Green(0, 128, 0, 255);
		Color Color::GreenYellow(173, 255, 47, 255);
		Color Color::Honeydew(240, 255, 240, 255);
		Color Color::HotPink(255, 105, 180, 255);
		Color Color::IndianRed(205, 92, 92, 255);
		Color Color::Indigo(75, 0, 130, 255);
		Color Color::Ivory(255, 255, 240, 255);
		Color Color::Khaki(240, 230, 140, 255);
		Color Color::Lavender(230, 230, 250, 255);
		Color Color::LavenderBlush(255, 240, 245, 255);
		Color Color::LawnGreen(124, 252, 0, 255);
		Color Color::LemonChiffon(255, 250, 205, 255);
		Color Color::LightBlue(173, 216, 230, 255);
		Color Color::LightCoral(240, 128, 128, 255);
		Color Color::LightCyan(224, 255, 255, 255);
		Color Color::LightGoldenrodYellow(250, 250, 210, 255);
		Color Color::LightGray(211, 211, 211, 255);
		Color Color::LightGreen(144, 238, 144, 255);
		Color Color::LightPink(255, 182, 193, 255);
		Color Color::LightSalmon(255, 160, 122, 255);
		Color Color::LightSeaGreen(32, 178, 170, 255);
		Color Color::LightSkyBlue(135, 206, 250, 255);
		Color Color::LightSlateGray(119, 136, 153, 255);
		Color Color::LightSteelBlue(176, 196, 222, 255);
		Color Color::LightYellow(255, 255, 224, 255);
		Color Color::Lime(0, 255, 0, 255);
		Color Color::LimeGreen(50, 205, 50, 255);
		Color Color::Linen(250, 240, 230, 255);
		Color Color::Magenta(255, 0, 255, 255);
		Color Color::Maroon(128, 0, 0, 255);
		Color Color::MediumAquamarine(102, 205, 170, 255);
		Color Color::MediumBlue(0, 0, 205, 255);
		Color Color::MediumOrchid(186, 85, 211, 255);
		Color Color::MediumPurple(147, 112, 219, 255);
		Color Color::MediumSeaGreen(60, 179, 113, 255);
		Color Color::MediumSlateBlue(123, 104, 238, 255);
		Color Color::MediumSpringGreen(0, 250, 154, 255);
		Color Color::MediumTurquoise(72, 209, 204, 255);
		Color Color::MediumVioletRed(199, 21, 133, 255);
		Color Color::MidnightBlue(25, 25, 112, 255);
		Color Color::MintCream(245, 255, 250, 255);
		Color Color::MistyRose(255, 228, 225, 255);
		Color Color::Moccasin(255, 228, 181, 255);
		Color Color::MonoGameOrange(231, 60, 0, 255);
		Color Color::NavajoWhite(255, 222, 173, 255);
		Color Color::Navy(0, 0, 128, 255);
		Color Color::OldLace(253, 245, 230, 255);
		Color Color::Olive(128, 128, 0, 255);
		Color Color::OliveDrab(107, 142, 35, 255);
		Color Color::Orange(255, 165, 0, 255);
		Color Color::OrangeRed(255, 69, 0, 255);
		Color Color::Orchid(218, 112, 214, 255);
		Color Color::PaleGoldenrod(238, 232, 170, 255);
		Color Color::PaleGreen(152, 251, 152, 255);
		Color Color::PaleTurquoise(175, 238, 238, 255);
		Color Color::PaleVioletRed(219, 112, 147, 255);
		Color Color::PapayaWhip(255, 239, 213, 255);
		Color Color::PeachPuff(255, 218, 185, 255);
		Color Color::Peru(205, 133, 63, 255);
		Color Color::Pink(255, 192, 203, 255);
		Color Color::Plum(221, 160, 221, 255);
		Color Color::PowderBlue(176, 224, 230, 255);
		Color Color::Purple(128, 0, 128, 255);
		Color Color::Red(255, 0, 0, 255);
		Color Color::RosyBrown(188, 143, 143, 255);
		Color Color::RoyalBlue(65, 105, 225, 255);
		Color Color::SaddleBrown(139, 69, 19, 255);
		Color Color::Salmon(250, 128, 114, 255);
		Color Color::SandyBrown(244, 164, 96, 255);
		Color Color::SeaGreen(46, 139, 87, 255);
		Color Color::SeaShell(255, 245, 238, 255);
		Color Color::Sienna(160, 82, 45, 255);
		Color Color::Silver(192, 192, 192, 255);
		Color Color::SkyBlue(135, 206, 235, 255);
		Color Color::SlateBlue(106, 90, 205, 255);
		Color Color::SlateGray(112, 128, 144, 255);
		Color Color::Snow(255, 250, 250, 255);
		Color Color::SpringGreen(0, 255, 127, 255);
		Color Color::SteelBlue(70, 130, 180, 255);
		Color Color::Tan(210, 180, 140, 255);
		Color Color::Teal(0, 128, 128, 255);
		Color Color::Thistle(216, 191, 216, 255);
		Color Color::Tomato(255, 99, 71, 255);
		Color Color::Turquoise(64, 224, 208, 255);
		Color Color::Violet(238, 130, 238, 255);
		Color Color::Wheat(245, 222, 179, 255);
		Color Color::WhiteSmoke(245, 245, 245, 255);
		Color Color::Yellow(255, 255, 0, 255);
		Color Color::YellowGreen(154, 205, 50, 255);


		Color::Color(int r, int g, int b, int a)
		{
			this->r = (1.0 / 255.0) * (double)r;
			this->g = (1.0 / 255.0) * (double)g;
			this->b = (1.0 / 255.0) * (double)b;
			this->a = (1.0 / 255.0) * (double)a;
		}

		Color::Color(double r, double g, double b, double a)
		{
			this->r = r;
			this->g = g;
			this->b = b;
			this->a = a;
		}

		Color::Color()
		{
			this->r = 0;
			this->g = 0;
			this->b = 0;
			this->a = 1;
		}


		Color* Color::Clone()
		{
			return new Color(this->r, this->g, this->b, this->a);
		}
	}
}