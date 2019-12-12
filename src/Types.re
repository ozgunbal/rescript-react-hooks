type form = {
  name: string,
  hobby: string,
  idFlag: bool,
  id: int,
};

type formAction =
  | SubmitForm(form);