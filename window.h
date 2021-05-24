#include <gtkmm.h>



class AddButton;
class DeleteButton;

class AppWindow : public Gtk::Window
{
public:
  AppWindow();
  virtual ~AppWindow() {}

private:
  void SetupEventHandlers();

  Gtk::Button* mAddButton;
  Gtk::Button* mDeleteButton;
  Gtk::Entry mInputField;
  Gtk::ListViewText mListView;
  Gtk::Fixed mFixedContainer;
};
