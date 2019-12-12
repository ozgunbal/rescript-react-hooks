[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();
  let (form, _) = UserContext.useForm();
  let pathname = url.path == [] ? "" : List.nth(url.path, 0);

  <div
    style={ReactDOMRe.Style.make(
      ~display="flex",
      ~justifyContent="center",
      (),
    )}>
    <div className="card" style={ReactDOMRe.Style.make(~width="18rem", ())}>
      <div className="card-body">
        <h5 className="card-title"> {React.string("Form Data")} </h5>
        <p className="card-text"> <FormRecordDisplay form /> </p>
      </div>
    </div>
    <div className="card" style={ReactDOMRe.Style.make(~width="18rem", ())}>
      <div className="card-body">
        <h5 className="card-title"> {React.string("Current location")} </h5>
        <p className="card-text">
          {React.string("/")}
          {React.string(pathname)}
        </p>
      </div>
    </div>
  </div>;
};