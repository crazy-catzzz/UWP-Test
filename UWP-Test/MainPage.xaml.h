//
// MainPage.xaml.h
// Dichiarazione della classe MainPage.
//

#pragma once

#include "MainPage.g.h"

namespace UWP_Test
{
	/// <summary>
	/// Pagina vuota che può essere usata autonomamente oppure per l'esplorazione all'interno di un frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
