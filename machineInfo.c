string[] properties = { "System.Devices.LocalMachine", "System.ItemNameDisplay", "System.Devices.ModelName", "System.Devices.ModelNumber", "System.Devices.Manufacturer" };
var containers = await PnpObject.FindAllAsync(PnpObjectType.DeviceContainer, properties);

foreach (PnpObject container in containers)
{
    bool localMachine = (bool)container.Properties["System.Devices.LocalMachine"];
    if (localMachine)
    {
        string name = (string)container.Properties["System.ItemNameDisplay"];
        string modelName = (string)container.Properties["System.Devices.ModelName"];
        string modelNumber = (string)container.Properties["System.Devices.ModelNumber"];
        string manufacturer = (string)container.Properties["System.Devices.Manufacturer"];
        break;
    }
}
