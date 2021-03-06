#ifndef WTCOMMONS_WFORM_H
#define WTCOMMONS_WFORM_H
#include <memory>
#include <Wt/WContainerWidget>

namespace WtCommons {

  class WForm : public Wt::WContainerWidget
  {
  public:
    enum Type { Default, Horizontal, Inline };
    WForm(Type type = Default, int labelColumns = 5, Wt::WContainerWidget *parent = 0);
    WForm *addButton(Wt::WWidget *w, bool isFormControl = false);
    WForm *add(Wt::WWidget *w, const std::string &labelKey = std::string(), bool isFormControl = true);
    WContainerWidget *addControl(Wt::WWidget *w, const std::string &labelKey = std::string(), bool isFormControl = true);
  private:
    class Private;
    friend class Private;
    std::unique_ptr<Private> const d;
  };

} // namespace WtCommons

#endif // WTCOMMONS_WFORM_H
