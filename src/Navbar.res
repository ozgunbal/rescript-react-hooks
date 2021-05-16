@react.component
let make = () => {
  let onNavClick = evt => {
    ReactEvent.Mouse.preventDefault(evt);
    let targetUrl = ReactEvent.Mouse.target(evt)["href"]
    RescriptReactRouter.push(targetUrl);
  };

  <nav className="navbar navbar-dark bg-dark">
    <a onClick=onNavClick href="/" className="navbar-brand">
      {React.string("Home")}
    </a>
    <a onClick=onNavClick href="/about" className="navbar-brand">
      {React.string("About")}
    </a>
    <a onClick=onNavClick href="/contact" className="navbar-brand">
      {React.string("Contact")}
    </a>
  </nav>;
};