# DummyDriver-by-Frankoo
its important to compile this driver with this settings else it will cause a bugcheck.

<ClCompile>
      <SuppressStartupBanner>false</SuppressStartupBanner>
      <IntrinsicFunctions>true</IntrinsicFunctions>
      <FavorSizeOrSpeed>Speed</FavorSizeOrSpeed>
      <BufferSecurityCheck>false</BufferSecurityCheck>
      <ExpandAttributedSource>true</ExpandAttributedSource>
      <AssemblerOutput>All</AssemblerOutput>
      <BrowseInformation>true</BrowseInformation>
      <CompileAs>Compile as C++ Code (/TP)</CompileAs>
      <EnablePREfast>false</EnablePREfast>
      <TreatWarningAsError>false</TreatWarningAsError>
</ClCompile>
<Link>
      <SuppressStartupBanner>false</SuppressStartupBanner>
      <LargeAddressAware>true</LargeAddressAware>
      <EntryPointSymbol>DriverEntry</EntryPointSymbol>
      <RandomizedBaseAddress>true</RandomizedBaseAddress>
      <DataExecutionPrevention>true</DataExecutionPrevention>
      <Profile>false</Profile>
</Link>
