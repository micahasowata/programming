import { Outlet } from "react-router-dom";

const Main = () => {
	return (
		<>
			<h2>Layout</h2>
			<Outlet />
			<footer>Hey from Minasa Docs</footer>
		</>
	);
};

export default Main;
