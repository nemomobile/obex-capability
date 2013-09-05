Name: obex-capability
Version: 0.0.1
Release: 1
Summary: Simple tool for generating OBEX capability files
Group: System/Libraries
License: GPLv2
Source: %{name}-%{version}.tar.gz
BuildRequires: pkgconfig(Qt5Core)
BuildRequires: pkgconfig(Qt5Xml)
BuildRequires: pkgconfig(Qt5SystemInfo)


%description
%{summary}.

%files
%defattr(-,root,root,-)
%{_bindir}/obex-capability


%prep
%setup -q


%build
%qmake5
make %{?_smp_mflags}


%install
make INSTALL_ROOT=%{buildroot} install
