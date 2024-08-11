import { NavLink } from "react-router-dom";

export default function Menu() {
  return (
    <nav>
      <ul>
        <NavLink to={"/"}>Home</NavLink>
      </ul>
    </nav>
  );
}
