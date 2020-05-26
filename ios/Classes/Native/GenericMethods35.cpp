#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>[]
struct EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>[]
struct EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Vuforia.TargetFinder>[]
struct EntryU5BU5D_tCA7ADE1BDF8E95DA27643A8D41EB6E2B13DCF867;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Vuforia.TargetFinder>
struct KeyCollection_t5BA9A140C02EC436DE1D881CB9A38348B630BFC1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Vuforia.TargetFinder>
struct ValueCollection_tF02102564C2393CE6E37E86A33BFADB49061E7B5;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Stack`1<UnityEngine.Rendering.RTHandle>>
struct Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_tA086E5DF05B5E12AB5BD479A0A0566E77144E53F;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle>
struct Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E;
// System.Collections.Generic.Dictionary`2<UnityEngine.Rendering.PostProcessing.PostProcessEvent,System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef>>
struct Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t738926C9C0B04B2D5FDECE63D5F9B968809D4238;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>
struct IDictionary_2_t3BB6590F3E435E4E580CA0E3D6950701BE9FFD1D;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>
struct IDictionary_2_tFC2468D906F6D24711624E5D04FB873CFD1971FC;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_t06F418BD13D332B926BF4A199CE38726025C2B7D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>
struct IEqualityComparer_1_t6A715EAB8725AAC504C12F39351C6722B6DE61BF;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t2CE05980F8B9CC1149914C41DDAB66D7ABFC902A;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,UnityEngine.Rendering.RTHandle>>
struct List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>>
struct List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417;
// System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter>
struct List_1_t3C517D87DC405758C2CBAE08CCD0A2A24BB5D268;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>
struct List_1_t7BE901F61F1A406FC143D643C9923B05DE767845;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource>
struct List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource>
struct List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A;
// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock>
struct List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB;
// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer>
struct List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352;
// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef>
struct List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5;
// System.Collections.Generic.List`1<UnityEngine.Rendering.RenderTargetIdentifier>
struct List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_t03A64E3831383D25869116D532083D86989D09D1;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_tE21EDDA7B9D124D56D393C74E3F66347A01B8147;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/Status>
struct Func_2_t854A9E275C64086C9E5A8BA5252236753338FCA3;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t048BF884DEC634DF2C72B18DE0074BEEFCF2C7E6;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t1AF4389885EDCAF20EE4E6FBD0CD50A435897369;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_tFA00CC82AB530CBB3AE283838E61F2A92D8AADEA;
// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_tD56B3E30FD7CB7B6C9BBEBFD094C2437FD6C5028;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.SByte[]
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Properties.IPropertyVisitorAdapter
struct IPropertyVisitorAdapter_t6F33432DC9B54B9429BEEE36DDA8E74E7960C827;
// Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87;
// Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5;
// Unity.Properties.Property`2<System.Object,System.Int32Enum>
struct Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021;
// Unity.Properties.Property`2<System.Object,System.Object>
struct Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E;
// Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>
struct Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7;
// Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>
struct Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F;
// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>
struct Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF;
// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>
struct Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6;
// Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>
struct Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786;
// Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>
struct Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33;
// Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>
struct Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676;
// Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>
struct Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15;
// Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>
struct Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06;
// Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>
struct Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C;
// Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>
struct Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE;
// Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>
struct Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F;
// Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>
struct Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
struct RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass
struct RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass[]
struct RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams
struct RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger
struct RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource[]
struct RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RendererListResource>
struct DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/TextureResource>
struct DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8;
// UnityEngine.Rendering.PostProcessing.Dithering
struct Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0;
// UnityEngine.Rendering.PostProcessing.FastApproximateAntialiasing
struct FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D;
// UnityEngine.Rendering.PostProcessing.Fog
struct Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77;
// UnityEngine.Rendering.PostProcessing.LogHistogram
struct LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79;
// UnityEngine.Rendering.PostProcessing.PostProcessAttribute
struct PostProcessAttribute_t9E50FBFEC7C3457951445E73AD60F252DAB70748;
// UnityEngine.Rendering.PostProcessing.PostProcessBundle
struct PostProcessBundle_tE29C05526676DF2148A37681C517E85FD98BE225;
// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer
struct PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
struct PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042;
// UnityEngine.Rendering.PostProcessing.PostProcessLayer
struct PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2;
// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
struct PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB;
// UnityEngine.Rendering.PostProcessing.PostProcessResources
struct PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B;
// UnityEngine.Rendering.PostProcessing.PropertySheetFactory
struct PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4;
// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
struct SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD;
// UnityEngine.Rendering.PostProcessing.TargetPool
struct TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949;
// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
struct TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D;
// UnityEngine.Rendering.RTHandleSystem
struct RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F;
// UnityEngine.Rendering.Universal.ShaderData
struct ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8;
// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A;
// Vuforia.IExtendedTrackingManager
struct IExtendedTrackingManager_t19EAD26ECD63C6C68F72CD8ACA00FF9C912A9C15;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2;
// Vuforia.IlluminationManager
struct IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755;
// Vuforia.ImageTargetFinder
struct ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957;
// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E;
// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC;
// Vuforia.VuMarkManager
struct VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9;

IL2CPP_EXTERN_C RuntimeClass* ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137;
IL2CPP_EXTERN_C String_t* _stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD59E4204584135A12DCA06596881B7BEB93616F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m178261C9451569356F8398040DA6BCE205F08ADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m011F5FA3CC5FBB00875D2C3615DED27D6CE38D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0B6FAC22324A918CFA9E37637257E82823029437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectTracker_GetTargetFinder_TisRuntimeObject_m8178BA66A8F4F11AF7663D58195358E539609362_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PostProcessLayer_GetBundle_TisRuntimeObject_m68B12586B61BB9821DDF7EB70AB735DC1981ADC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mDBC749E123BCB51DF0EA39DD3C90CB23BFFA01A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5AA68128B37231F711E68254FCF81AAB48CA90EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m6E40B5E893A472C2565EF9A278B4345A4418F08C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m8A5D295AF8EEC0BAEC34A55B4514E7CB92623344_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m2B095F4126E8B3E2697AB9A0D8338B266F92AA9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisPropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D_TisRuntimeObject_m7A872F8EE22AD84ECA7FA4E02AA671239FAF7266_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mB82B1D59F276B12AD120419903CCB49567F30F28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m7FAC93C705087ADBB09639C36F293A9B2ACDBFBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m473CF132AD92CECD19AC693456AF089D0B661450_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mBB6B14CCB0F4303C65940F4823A2C757AB3ED0B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisRuntimeObject_m74209EA58A21D287AD93F5A9C879BE3E12BC1F69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mEF1A92BD29C74E6E2ADF925C19A165892B4E9EEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m579B2D949C6D40C8773CBF2080711F8682DC1156_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m5AEC6363763AC29EEB5DF71AD2144B4280F9C1D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_TisRuntimeObject_m2E907773C0644A9AEF18DFCC89F0C5F009FD4156_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m0BD90872DC9F970FA10B6E5827B5054901E6889C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mE249BE7D944F5943D12BC7A67B725FF46036BD6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisPropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D_TisRuntimeObject_mBBBE9FF855CE1C2585E5FDDCE940ECC43E5B4C60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mB42106C430BDDED9182AF4D8F08B89EC20AA07D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m4DC64BFFAF62A5B328555E1239CABA08B0BBDE45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mF93C083C78776303C33B47ECC2CD98CF5E18C4E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_m32067C8A016809B6DB1CE3001E38B0279EC88038_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisRuntimeObject_mBFE31B9AAD38F64DCEEA472D4F2D41E6AEFEFE78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mFD8515FEF4D6762989ED4AAE38B7834922CA5A4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF9430E5813B15B533DB8CC2532191E548DF874AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m945C6232C68C969EF918BF20AE01B6342985AEC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC8371829A88ABA8092509102140EBC8CE4BE42C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderGraph_AddRenderPass_TisRuntimeObject_m1C6757E94C2987D53A76FFEEE2D49C3AA1A2440D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShaderData_GetOrUpdateBuffer_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m47ABD988F1069D0101E4D475C03716FC2FC1353D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShaderData_GetOrUpdateBuffer_TisLightData_t773677FBDE7024B6D8122EE78BEB3C6FD245EEDF_m770AEDAE9D77147FC5B189805A6984AA530448FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShaderData_GetOrUpdateBuffer_TisShadowData_t7BEFADB532343B15D6E360E1D85CF0C3EC0D1571_mC05E30362C21A637E76FFF4CB0C87D5E88F8F77A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackAsset_CreateClip_TisRuntimeObject_m18D5554A2F61580A8C4F632E5EBDD1451FA08C50_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct  Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___entries_1)); }
	inline EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___keys_7)); }
	inline KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___values_8)); }
	inline ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct  Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___entries_1)); }
	inline EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___keys_7)); }
	inline KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___values_8)); }
	inline ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct  Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCA7ADE1BDF8E95DA27643A8D41EB6E2B13DCF867* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5BA9A140C02EC436DE1D881CB9A38348B630BFC1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF02102564C2393CE6E37E86A33BFADB49061E7B5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___entries_1)); }
	inline EntryU5BU5D_tCA7ADE1BDF8E95DA27643A8D41EB6E2B13DCF867* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCA7ADE1BDF8E95DA27643A8D41EB6E2B13DCF867** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCA7ADE1BDF8E95DA27643A8D41EB6E2B13DCF867* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___keys_7)); }
	inline KeyCollection_t5BA9A140C02EC436DE1D881CB9A38348B630BFC1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5BA9A140C02EC436DE1D881CB9A38348B630BFC1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5BA9A140C02EC436DE1D881CB9A38348B630BFC1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___values_8)); }
	inline ValueCollection_tF02102564C2393CE6E37E86A33BFADB49061E7B5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF02102564C2393CE6E37E86A33BFADB49061E7B5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF02102564C2393CE6E37E86A33BFADB49061E7B5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass>
struct  List_1_t7BE901F61F1A406FC143D643C9923B05DE767845  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845, ____items_1)); }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* get__items_1() const { return ____items_1; }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7BE901F61F1A406FC143D643C9923B05DE767845_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845_StaticFields, ____emptyArray_5)); }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Properties.Internal.PropertyVisitorAdapterExtensions
struct  PropertyVisitorAdapterExtensions_t8172ADFA9CDD2BF1C7A53ED8F523BE0221C225EC  : public RuntimeObject
{
public:

public:
};


// Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct  Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,System.Int32Enum>
struct  Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,System.Object>
struct  Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>
struct  Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>
struct  Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>
struct  Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>
struct  Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>
struct  Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>
struct  Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>
struct  Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>
struct  Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>
struct  Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>
struct  Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>
struct  Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>
struct  Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>
struct  Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
struct  RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_Resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderGraphPool
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___m_RenderGraphPool_2;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderPasses
	List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * ___m_RenderPasses_3;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RendererLists
	List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * ___m_RendererLists_4;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_DebugParameters
	RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * ___m_DebugParameters_5;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_Logger
	RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * ___m_Logger_6;

public:
	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_Resources_1)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraphPool_2() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_RenderGraphPool_2)); }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * get_m_RenderGraphPool_2() const { return ___m_RenderGraphPool_2; }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 ** get_address_of_m_RenderGraphPool_2() { return &___m_RenderGraphPool_2; }
	inline void set_m_RenderGraphPool_2(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * value)
	{
		___m_RenderGraphPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderPasses_3() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_RenderPasses_3)); }
	inline List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * get_m_RenderPasses_3() const { return ___m_RenderPasses_3; }
	inline List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 ** get_address_of_m_RenderPasses_3() { return &___m_RenderPasses_3; }
	inline void set_m_RenderPasses_3(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * value)
	{
		___m_RenderPasses_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderPasses_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererLists_4() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_RendererLists_4)); }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * get_m_RendererLists_4() const { return ___m_RendererLists_4; }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A ** get_address_of_m_RendererLists_4() { return &___m_RendererLists_4; }
	inline void set_m_RendererLists_4(List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * value)
	{
		___m_RendererLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DebugParameters_5() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_DebugParameters_5)); }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * get_m_DebugParameters_5() const { return ___m_DebugParameters_5; }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 ** get_address_of_m_DebugParameters_5() { return &___m_DebugParameters_5; }
	inline void set_m_DebugParameters_5(RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * value)
	{
		___m_DebugParameters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DebugParameters_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_6() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_Logger_6)); }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * get_m_Logger_6() const { return ___m_Logger_6; }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C ** get_address_of_m_Logger_6() { return &___m_Logger_6; }
	inline void set_m_Logger_6(RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * value)
	{
		___m_Logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_6), (void*)value);
	}
};

struct RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042_StaticFields
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::kMaxMRTCount
	int32_t ___kMaxMRTCount_0;

public:
	inline static int32_t get_offset_of_kMaxMRTCount_0() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042_StaticFields, ___kMaxMRTCount_0)); }
	inline int32_t get_kMaxMRTCount_0() const { return ___kMaxMRTCount_0; }
	inline int32_t* get_address_of_kMaxMRTCount_0() { return &___kMaxMRTCount_0; }
	inline void set_kMaxMRTCount_0(int32_t value)
	{
		___kMaxMRTCount_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct  RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_ArrayPool
	Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * ___m_ArrayPool_0;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_AllocatedArrays
	List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 * ___m_AllocatedArrays_1;
	// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_AllocatedMaterialPropertyBlocks
	List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB * ___m_AllocatedMaterialPropertyBlocks_2;

public:
	inline static int32_t get_offset_of_m_ArrayPool_0() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735, ___m_ArrayPool_0)); }
	inline Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * get_m_ArrayPool_0() const { return ___m_ArrayPool_0; }
	inline Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E ** get_address_of_m_ArrayPool_0() { return &___m_ArrayPool_0; }
	inline void set_m_ArrayPool_0(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * value)
	{
		___m_ArrayPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ArrayPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedArrays_1() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735, ___m_AllocatedArrays_1)); }
	inline List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 * get_m_AllocatedArrays_1() const { return ___m_AllocatedArrays_1; }
	inline List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 ** get_address_of_m_AllocatedArrays_1() { return &___m_AllocatedArrays_1; }
	inline void set_m_AllocatedArrays_1(List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 * value)
	{
		___m_AllocatedArrays_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedArrays_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedMaterialPropertyBlocks_2() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735, ___m_AllocatedMaterialPropertyBlocks_2)); }
	inline List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB * get_m_AllocatedMaterialPropertyBlocks_2() const { return ___m_AllocatedMaterialPropertyBlocks_2; }
	inline List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB ** get_address_of_m_AllocatedMaterialPropertyBlocks_2() { return &___m_AllocatedMaterialPropertyBlocks_2; }
	inline void set_m_AllocatedMaterialPropertyBlocks_2(List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB * value)
	{
		___m_AllocatedMaterialPropertyBlocks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedMaterialPropertyBlocks_2), (void*)value);
	}
};


// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t1C5F617FAB0FB28821DAD04A9A9ED25EA200FB97  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Playables.PlayableOutputExtensions
struct  PlayableOutputExtensions_t4BD7A3CB823837BB82DB35731F3292C6412C9B19  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.PostProcessBundle
struct  PostProcessBundle_tE29C05526676DF2148A37681C517E85FD98BE225  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.PostProcessing.PostProcessAttribute UnityEngine.Rendering.PostProcessing.PostProcessBundle::<attribute>k__BackingField
	PostProcessAttribute_t9E50FBFEC7C3457951445E73AD60F252DAB70748 * ___U3CattributeU3Ek__BackingField_0;
	// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings UnityEngine.Rendering.PostProcessing.PostProcessBundle::<settings>k__BackingField
	PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042 * ___U3CsettingsU3Ek__BackingField_1;
	// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer UnityEngine.Rendering.PostProcessing.PostProcessBundle::m_Renderer
	PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F * ___m_Renderer_2;

public:
	inline static int32_t get_offset_of_U3CattributeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PostProcessBundle_tE29C05526676DF2148A37681C517E85FD98BE225, ___U3CattributeU3Ek__BackingField_0)); }
	inline PostProcessAttribute_t9E50FBFEC7C3457951445E73AD60F252DAB70748 * get_U3CattributeU3Ek__BackingField_0() const { return ___U3CattributeU3Ek__BackingField_0; }
	inline PostProcessAttribute_t9E50FBFEC7C3457951445E73AD60F252DAB70748 ** get_address_of_U3CattributeU3Ek__BackingField_0() { return &___U3CattributeU3Ek__BackingField_0; }
	inline void set_U3CattributeU3Ek__BackingField_0(PostProcessAttribute_t9E50FBFEC7C3457951445E73AD60F252DAB70748 * value)
	{
		___U3CattributeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CattributeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessBundle_tE29C05526676DF2148A37681C517E85FD98BE225, ___U3CsettingsU3Ek__BackingField_1)); }
	inline PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042 * get_U3CsettingsU3Ek__BackingField_1() const { return ___U3CsettingsU3Ek__BackingField_1; }
	inline PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042 ** get_address_of_U3CsettingsU3Ek__BackingField_1() { return &___U3CsettingsU3Ek__BackingField_1; }
	inline void set_U3CsettingsU3Ek__BackingField_1(PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042 * value)
	{
		___U3CsettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsettingsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Renderer_2() { return static_cast<int32_t>(offsetof(PostProcessBundle_tE29C05526676DF2148A37681C517E85FD98BE225, ___m_Renderer_2)); }
	inline PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F * get_m_Renderer_2() const { return ___m_Renderer_2; }
	inline PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F ** get_address_of_m_Renderer_2() { return &___m_Renderer_2; }
	inline void set_m_Renderer_2(PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F * value)
	{
		___m_Renderer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Renderer_2), (void*)value);
	}
};


// UnityEngine.Rendering.ProfilingSampler
struct  ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D  : public RuntimeObject
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<sampler>k__BackingField
	CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * ___U3CsamplerU3Ek__BackingField_0;
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<inlineSampler>k__BackingField
	CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * ___U3CinlineSamplerU3Ek__BackingField_1;
	// System.String UnityEngine.Rendering.ProfilingSampler::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsamplerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D, ___U3CsamplerU3Ek__BackingField_0)); }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * get_U3CsamplerU3Ek__BackingField_0() const { return ___U3CsamplerU3Ek__BackingField_0; }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 ** get_address_of_U3CsamplerU3Ek__BackingField_0() { return &___U3CsamplerU3Ek__BackingField_0; }
	inline void set_U3CsamplerU3Ek__BackingField_0(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * value)
	{
		___U3CsamplerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsamplerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinlineSamplerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D, ___U3CinlineSamplerU3Ek__BackingField_1)); }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * get_U3CinlineSamplerU3Ek__BackingField_1() const { return ___U3CinlineSamplerU3Ek__BackingField_1; }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 ** get_address_of_U3CinlineSamplerU3Ek__BackingField_1() { return &___U3CinlineSamplerU3Ek__BackingField_1; }
	inline void set_U3CinlineSamplerU3Ek__BackingField_1(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * value)
	{
		___U3CinlineSamplerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinlineSamplerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ShaderData
struct  ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8  : public RuntimeObject
{
public:
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::m_LightDataBuffer
	ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ___m_LightDataBuffer_1;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::m_LightIndicesBuffer
	ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ___m_LightIndicesBuffer_2;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::m_ShadowDataBuffer
	ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ___m_ShadowDataBuffer_3;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::m_ShadowIndicesBuffer
	ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ___m_ShadowIndicesBuffer_4;

public:
	inline static int32_t get_offset_of_m_LightDataBuffer_1() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8, ___m_LightDataBuffer_1)); }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * get_m_LightDataBuffer_1() const { return ___m_LightDataBuffer_1; }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** get_address_of_m_LightDataBuffer_1() { return &___m_LightDataBuffer_1; }
	inline void set_m_LightDataBuffer_1(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * value)
	{
		___m_LightDataBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LightDataBuffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_LightIndicesBuffer_2() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8, ___m_LightIndicesBuffer_2)); }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * get_m_LightIndicesBuffer_2() const { return ___m_LightIndicesBuffer_2; }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** get_address_of_m_LightIndicesBuffer_2() { return &___m_LightIndicesBuffer_2; }
	inline void set_m_LightIndicesBuffer_2(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * value)
	{
		___m_LightIndicesBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LightIndicesBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShadowDataBuffer_3() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8, ___m_ShadowDataBuffer_3)); }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * get_m_ShadowDataBuffer_3() const { return ___m_ShadowDataBuffer_3; }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** get_address_of_m_ShadowDataBuffer_3() { return &___m_ShadowDataBuffer_3; }
	inline void set_m_ShadowDataBuffer_3(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * value)
	{
		___m_ShadowDataBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShadowDataBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShadowIndicesBuffer_4() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8, ___m_ShadowIndicesBuffer_4)); }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * get_m_ShadowIndicesBuffer_4() const { return ___m_ShadowIndicesBuffer_4; }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** get_address_of_m_ShadowIndicesBuffer_4() { return &___m_ShadowIndicesBuffer_4; }
	inline void set_m_ShadowIndicesBuffer_4(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * value)
	{
		___m_ShadowIndicesBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShadowIndicesBuffer_4), (void*)value);
	}
};

struct ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.ShaderData UnityEngine.Rendering.Universal.ShaderData::m_Instance
	ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * ___m_Instance_0;

public:
	inline static int32_t get_offset_of_m_Instance_0() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8_StaticFields, ___m_Instance_0)); }
	inline ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * get_m_Instance_0() const { return ___m_Instance_0; }
	inline ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 ** get_address_of_m_Instance_0() { return &___m_Instance_0; }
	inline void set_m_Instance_0(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * value)
	{
		___m_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_0), (void*)value);
	}
};


// Vuforia.StateManager
struct  StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_tA086E5DF05B5E12AB5BD479A0A0566E77144E53F * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_tE21EDDA7B9D124D56D393C74E3F66347A01B8147 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_tE21EDDA7B9D124D56D393C74E3F66347A01B8147 * ___mActiveTrackableBehaviours_3;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * ___mVuMarkManager_4;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * ___mDeviceTrackingManager_5;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mCameraPositioningHelper_6;
	// Vuforia.IExtendedTrackingManager Vuforia.StateManager::mExtendedTrackingManager
	RuntimeObject* ___mExtendedTrackingManager_7;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * ___mIlluminationManager_8;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_tA086E5DF05B5E12AB5BD479A0A0566E77144E53F * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_tA086E5DF05B5E12AB5BD479A0A0566E77144E53F ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_tA086E5DF05B5E12AB5BD479A0A0566E77144E53F * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableBehaviours_0), (void*)value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAutomaticallyCreatedBehaviours_1), (void*)value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_tE21EDDA7B9D124D56D393C74E3F66347A01B8147 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_tE21EDDA7B9D124D56D393C74E3F66347A01B8147 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_tE21EDDA7B9D124D56D393C74E3F66347A01B8147 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBehavioursMarkedForDeletion_2), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mActiveTrackableBehaviours_3)); }
	inline List_1_tE21EDDA7B9D124D56D393C74E3F66347A01B8147 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_tE21EDDA7B9D124D56D393C74E3F66347A01B8147 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_tE21EDDA7B9D124D56D393C74E3F66347A01B8147 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveTrackableBehaviours_3), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_4() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mVuMarkManager_4)); }
	inline VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * get_mVuMarkManager_4() const { return ___mVuMarkManager_4; }
	inline VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 ** get_address_of_mVuMarkManager_4() { return &___mVuMarkManager_4; }
	inline void set_mVuMarkManager_4(VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * value)
	{
		___mVuMarkManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_5() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mDeviceTrackingManager_5)); }
	inline DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * get_mDeviceTrackingManager_5() const { return ___mDeviceTrackingManager_5; }
	inline DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A ** get_address_of_mDeviceTrackingManager_5() { return &___mDeviceTrackingManager_5; }
	inline void set_mDeviceTrackingManager_5(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * value)
	{
		___mDeviceTrackingManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceTrackingManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_6() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mCameraPositioningHelper_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mCameraPositioningHelper_6() const { return ___mCameraPositioningHelper_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mCameraPositioningHelper_6() { return &___mCameraPositioningHelper_6; }
	inline void set_mCameraPositioningHelper_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mCameraPositioningHelper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraPositioningHelper_6), (void*)value);
	}

	inline static int32_t get_offset_of_mExtendedTrackingManager_7() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mExtendedTrackingManager_7)); }
	inline RuntimeObject* get_mExtendedTrackingManager_7() const { return ___mExtendedTrackingManager_7; }
	inline RuntimeObject** get_address_of_mExtendedTrackingManager_7() { return &___mExtendedTrackingManager_7; }
	inline void set_mExtendedTrackingManager_7(RuntimeObject* value)
	{
		___mExtendedTrackingManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtendedTrackingManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_8() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mIlluminationManager_8)); }
	inline IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * get_mIlluminationManager_8() const { return ___mIlluminationManager_8; }
	inline IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 ** get_address_of_mIlluminationManager_8() { return &___mIlluminationManager_8; }
	inline void set_mIlluminationManager_8(IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * value)
	{
		___mIlluminationManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIlluminationManager_8), (void*)value);
	}
};


// Vuforia.Tracker
struct  Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>
struct  Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3C517D87DC405758C2CBAE08CCD0A2A24BB5D268 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48, ___list_0)); }
	inline List_1_t3C517D87DC405758C2CBAE08CCD0A2A24BB5D268 * get_list_0() const { return ___list_0; }
	inline List_1_t3C517D87DC405758C2CBAE08CCD0A2A24BB5D268 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3C517D87DC405758C2CBAE08CCD0A2A24BB5D268 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Unity.Entities.EditorRenderData
struct  EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 
{
public:
	// System.UInt64 Unity.Entities.EditorRenderData::SceneCullingMask
	uint64_t ___SceneCullingMask_0;
	// UnityEngine.GameObject Unity.Entities.EditorRenderData::PickableObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PickableObject_1;

public:
	inline static int32_t get_offset_of_SceneCullingMask_0() { return static_cast<int32_t>(offsetof(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55, ___SceneCullingMask_0)); }
	inline uint64_t get_SceneCullingMask_0() const { return ___SceneCullingMask_0; }
	inline uint64_t* get_address_of_SceneCullingMask_0() { return &___SceneCullingMask_0; }
	inline void set_SceneCullingMask_0(uint64_t value)
	{
		___SceneCullingMask_0 = value;
	}

	inline static int32_t get_offset_of_PickableObject_1() { return static_cast<int32_t>(offsetof(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55, ___PickableObject_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PickableObject_1() const { return ___PickableObject_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PickableObject_1() { return &___PickableObject_1; }
	inline void set_PickableObject_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PickableObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PickableObject_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EditorRenderData
struct EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_marshaled_pinvoke
{
	uint64_t ___SceneCullingMask_0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PickableObject_1;
};
// Native definition for COM marshalling of Unity.Entities.EditorRenderData
struct EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_marshaled_com
{
	uint64_t ___SceneCullingMask_0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PickableObject_1;
};

// Unity.Entities.Entity
struct  Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 
{
public:
	// System.Int32 Unity.Entities.Entity::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Entities.Entity::Version
	int32_t ___Version_1;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Version_1() { return static_cast<int32_t>(offsetof(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8, ___Version_1)); }
	inline int32_t get_Version_1() const { return ___Version_1; }
	inline int32_t* get_address_of_Version_1() { return &___Version_1; }
	inline void set_Version_1(int32_t value)
	{
		___Version_1 = value;
	}
};


// Unity.Mathematics.uint4
struct  uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC 
{
public:
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___x_0)); }
	inline uint32_t get_x_0() const { return ___x_0; }
	inline uint32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___y_1)); }
	inline uint32_t get_y_1() const { return ___y_1; }
	inline uint32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___z_2)); }
	inline uint32_t get_z_2() const { return ___z_2; }
	inline uint32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint32_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___w_3)); }
	inline uint32_t get_w_3() const { return ___w_3; }
	inline uint32_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint32_t value)
	{
		___w_3 = value;
	}
};

struct uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_StaticFields
{
public:
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  ___zero_4;

public:
	inline static int32_t get_offset_of_zero_4() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_StaticFields, ___zero_4)); }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  get_zero_4() const { return ___zero_4; }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * get_address_of_zero_4() { return &___zero_4; }
	inline void set_zero_4(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  value)
	{
		___zero_4 = value;
	}
};


// Unity.Properties.Internal.PropertyWrapper`1<System.Object>
struct  PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D 
{
public:
	// T Unity.Properties.Internal.PropertyWrapper`1::Value
	RuntimeObject * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D, ___Value_0)); }
	inline RuntimeObject * get_Value_0() const { return ___Value_0; }
	inline RuntimeObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct  RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312 
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_RenderPass
	RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___m_RenderPass_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Disposed
	bool ___m_Disposed_2;

public:
	inline static int32_t get_offset_of_m_RenderPass_0() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312, ___m_RenderPass_0)); }
	inline RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * get_m_RenderPass_0() const { return ___m_RenderPass_0; }
	inline RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 ** get_address_of_m_RenderPass_0() { return &___m_RenderPass_0; }
	inline void set_m_RenderPass_0(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * value)
	{
		___m_RenderPass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderPass_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312, ___m_Resources_1)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_2() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312, ___m_Disposed_2)); }
	inline bool get_m_Disposed_2() const { return ___m_Disposed_2; }
	inline bool* get_address_of_m_Disposed_2() { return &___m_Disposed_2; }
	inline void set_m_Disposed_2(bool value)
	{
		___m_Disposed_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312_marshaled_pinvoke
{
	RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	int32_t ___m_Disposed_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312_marshaled_com
{
	RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	int32_t ___m_Disposed_2;
};

// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rendering.ShaderTagId
struct  ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940_StaticFields, ___none_0)); }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  get_none_0() const { return ___none_0; }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  value)
	{
		___none_0 = value;
	}
};


// UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>
struct  TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF  : public ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D
{
public:

public:
};

struct TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> UnityEngine.Rendering.TProfilingSampler`1::samples
	Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 * ___samples_3;

public:
	inline static int32_t get_offset_of_samples_3() { return static_cast<int32_t>(offsetof(TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_StaticFields, ___samples_3)); }
	inline Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 * get_samples_3() const { return ___samples_3; }
	inline Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 ** get_address_of_samples_3() { return &___samples_3; }
	inline void set_samples_3(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 * value)
	{
		___samples_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_3), (void*)value);
	}
};


// UnityEngine.Rendering.TProfilingSampler`1<System.Object>
struct  TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6  : public ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D
{
public:

public:
};

struct TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> UnityEngine.Rendering.TProfilingSampler`1::samples
	Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E * ___samples_3;

public:
	inline static int32_t get_offset_of_samples_3() { return static_cast<int32_t>(offsetof(TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6_StaticFields, ___samples_3)); }
	inline Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E * get_samples_3() const { return ___samples_3; }
	inline Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E ** get_address_of_samples_3() { return &___samples_3; }
	inline void set_samples_3(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E * value)
	{
		___samples_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_3), (void*)value);
	}
};


// UnityEngine.Timeline.DiscreteTime
struct  DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___kMaxTime_1 = value;
	}
};


// UnityEngine.Timeline.MarkerList
struct  MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Objects_0)); }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Cache_1)); }
	inline List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_pinvoke
{
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Objects_0;
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_com
{
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Objects_0;
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.Timeline.TrackAsset_TransientBuildData
struct  TransientBuildData_t2CDF71634041677EC226311F30665780C2026744 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset_TransientBuildData::trackList
	List_1_t03A64E3831383D25869116D532083D86989D09D1 * ___trackList_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset_TransientBuildData::clipList
	List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * ___clipList_1;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.TrackAsset_TransientBuildData::markerList
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___markerList_2;

public:
	inline static int32_t get_offset_of_trackList_0() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___trackList_0)); }
	inline List_1_t03A64E3831383D25869116D532083D86989D09D1 * get_trackList_0() const { return ___trackList_0; }
	inline List_1_t03A64E3831383D25869116D532083D86989D09D1 ** get_address_of_trackList_0() { return &___trackList_0; }
	inline void set_trackList_0(List_1_t03A64E3831383D25869116D532083D86989D09D1 * value)
	{
		___trackList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackList_0), (void*)value);
	}

	inline static int32_t get_offset_of_clipList_1() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___clipList_1)); }
	inline List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * get_clipList_1() const { return ___clipList_1; }
	inline List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 ** get_address_of_clipList_1() { return &___clipList_1; }
	inline void set_clipList_1(List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * value)
	{
		___clipList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipList_1), (void*)value);
	}

	inline static int32_t get_offset_of_markerList_2() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___markerList_2)); }
	inline List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * get_markerList_2() const { return ___markerList_2; }
	inline List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 ** get_address_of_markerList_2() { return &___markerList_2; }
	inline void set_markerList_2(List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * value)
	{
		___markerList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerList_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshaled_pinvoke
{
	List_1_t03A64E3831383D25869116D532083D86989D09D1 * ___trackList_0;
	List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * ___clipList_1;
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___markerList_2;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshaled_com
{
	List_1_t03A64E3831383D25869116D532083D86989D09D1 * ___trackList_0;
	List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * ___clipList_1;
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___markerList_2;
};

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Vuforia.ObjectTracker
struct  ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E  : public Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * ___mDataSets_2;
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * ___mTargetFinders_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * ___mImageTargetBuilder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mActiveDataSets_1)); }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveDataSets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mDataSets_2)); }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSets_2), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mTargetFinders_3)); }
	inline Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinders_3), (void*)value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageTargetBuilder_4), (void*)value);
	}
};


// Vuforia.TargetFinder_TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D 
{
public:
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Entities.Hash128
struct  Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F 
{
public:
	// Unity.Mathematics.uint4 Unity.Entities.Hash128::Value
	uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F, ___Value_0)); }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  get_Value_0() const { return ___Value_0; }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  value)
	{
		___Value_0 = value;
	}
};

struct Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_StaticFields
{
public:
	// System.Char[] Unity.Entities.Hash128::k_HexToLiteral
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___k_HexToLiteral_1;
	// System.SByte[] Unity.Entities.Hash128::k_LiteralToHex
	SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* ___k_LiteralToHex_2;

public:
	inline static int32_t get_offset_of_k_HexToLiteral_1() { return static_cast<int32_t>(offsetof(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_StaticFields, ___k_HexToLiteral_1)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_k_HexToLiteral_1() const { return ___k_HexToLiteral_1; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_k_HexToLiteral_1() { return &___k_HexToLiteral_1; }
	inline void set_k_HexToLiteral_1(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___k_HexToLiteral_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_HexToLiteral_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_LiteralToHex_2() { return static_cast<int32_t>(offsetof(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_StaticFields, ___k_LiteralToHex_2)); }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* get_k_LiteralToHex_2() const { return ___k_LiteralToHex_2; }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889** get_address_of_k_LiteralToHex_2() { return &___k_LiteralToHex_2; }
	inline void set_k_LiteralToHex_2(SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* value)
	{
		___k_LiteralToHex_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_LiteralToHex_2), (void*)value);
	}
};


// Unity.Entities.SceneTag
struct  SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 
{
public:
	// Unity.Entities.Entity Unity.Entities.SceneTag::SceneEntity
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___SceneEntity_0;

public:
	inline static int32_t get_offset_of_SceneEntity_0() { return static_cast<int32_t>(offsetof(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04, ___SceneEntity_0)); }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  get_SceneEntity_0() const { return ___SceneEntity_0; }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * get_address_of_SceneEntity_0() { return &___SceneEntity_0; }
	inline void set_SceneEntity_0(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  value)
	{
		___SceneEntity_0 = value;
	}
};


// Unity.Properties.VisitStatus
struct  VisitStatus_tB90B24DF1B51ED4E0AA3B38C9CDE222254ECC8BE 
{
public:
	// System.Int32 Unity.Properties.VisitStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisitStatus_tB90B24DF1B51ED4E0AA3B38C9CDE222254ECC8BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ComputeBuffer
struct  ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t284833A8AB245ACA7E27BE611BE03B18B0249F01 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t284833A8AB245ACA7E27BE611BE03B18B0249F01, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct  RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry_TextureResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_TextureResources
	DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 * ___m_TextureResources_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Stack`1<UnityEngine.Rendering.RTHandle>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_TexturePool
	Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380 * ___m_TexturePool_2;
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry_RendererListResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RendererListResources
	DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF * ___m_RendererListResources_3;
	// UnityEngine.Rendering.RTHandleSystem UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RTHandleSystem
	RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F * ___m_RTHandleSystem_4;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RenderGraphDebug
	RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * ___m_RenderGraphDebug_5;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_Logger
	RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * ___m_Logger_6;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,UnityEngine.Rendering.RTHandle>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_AllocatedTextures
	List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F * ___m_AllocatedTextures_7;

public:
	inline static int32_t get_offset_of_m_TextureResources_1() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_TextureResources_1)); }
	inline DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 * get_m_TextureResources_1() const { return ___m_TextureResources_1; }
	inline DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 ** get_address_of_m_TextureResources_1() { return &___m_TextureResources_1; }
	inline void set_m_TextureResources_1(DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 * value)
	{
		___m_TextureResources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextureResources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TexturePool_2() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_TexturePool_2)); }
	inline Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380 * get_m_TexturePool_2() const { return ___m_TexturePool_2; }
	inline Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380 ** get_address_of_m_TexturePool_2() { return &___m_TexturePool_2; }
	inline void set_m_TexturePool_2(Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380 * value)
	{
		___m_TexturePool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TexturePool_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererListResources_3() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_RendererListResources_3)); }
	inline DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF * get_m_RendererListResources_3() const { return ___m_RendererListResources_3; }
	inline DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF ** get_address_of_m_RendererListResources_3() { return &___m_RendererListResources_3; }
	inline void set_m_RendererListResources_3(DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF * value)
	{
		___m_RendererListResources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererListResources_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RTHandleSystem_4() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_RTHandleSystem_4)); }
	inline RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F * get_m_RTHandleSystem_4() const { return ___m_RTHandleSystem_4; }
	inline RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F ** get_address_of_m_RTHandleSystem_4() { return &___m_RTHandleSystem_4; }
	inline void set_m_RTHandleSystem_4(RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F * value)
	{
		___m_RTHandleSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RTHandleSystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraphDebug_5() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_RenderGraphDebug_5)); }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * get_m_RenderGraphDebug_5() const { return ___m_RenderGraphDebug_5; }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 ** get_address_of_m_RenderGraphDebug_5() { return &___m_RenderGraphDebug_5; }
	inline void set_m_RenderGraphDebug_5(RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * value)
	{
		___m_RenderGraphDebug_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphDebug_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_6() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_Logger_6)); }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * get_m_Logger_6() const { return ___m_Logger_6; }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C ** get_address_of_m_Logger_6() { return &___m_Logger_6; }
	inline void set_m_Logger_6(RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * value)
	{
		___m_Logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedTextures_7() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_AllocatedTextures_7)); }
	inline List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F * get_m_AllocatedTextures_7() const { return ___m_AllocatedTextures_7; }
	inline List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F ** get_address_of_m_AllocatedTextures_7() { return &___m_AllocatedTextures_7; }
	inline void set_m_AllocatedTextures_7(List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F * value)
	{
		___m_AllocatedTextures_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedTextures_7), (void*)value);
	}
};

struct RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::s_EmptyName
	ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___s_EmptyName_0;

public:
	inline static int32_t get_offset_of_s_EmptyName_0() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82_StaticFields, ___s_EmptyName_0)); }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  get_s_EmptyName_0() const { return ___s_EmptyName_0; }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 * get_address_of_s_EmptyName_0() { return &___s_EmptyName_0; }
	inline void set_s_EmptyName_0(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  value)
	{
		___s_EmptyName_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType
struct  RenderGraphResourceType_t13ED07FF7DD43627D5D5D985895BA904612D6905 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderGraphResourceType_t13ED07FF7DD43627D5D5D985895BA904612D6905, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.DirectorWrapMode
struct  DirectorWrapMode_tD93E09C346FDF234446F8C1B8A06020E52E05CDF 
{
public:
	// System.Int32 UnityEngine.Playables.DirectorWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DirectorWrapMode_tD93E09C346FDF234446F8C1B8A06020E52E05CDF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayState
struct  PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer_Antialiasing
struct  Antialiasing_t4B83F9C9FA7E42D5B3EB30CE9B5B4F870C3780FA 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessLayer_Antialiasing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Antialiasing_t4B83F9C9FA7E42D5B3EB30CE9B5B4F870C3780FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B 
{
public:
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Timeline.ClipCaps
struct  ClipCaps_tF9AB6311CC5A0AA6908A88DCA53CB00208035E46 
{
public:
	// System.Int32 UnityEngine.Timeline.ClipCaps::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipCaps_tF9AB6311CC5A0AA6908A88DCA53CB00208035E46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip_BlendCurveMode
struct  BlendCurveMode_t68FF453F9C85DD1968A09AEA576C6173C648F6F1 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip_BlendCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendCurveMode_t68FF453F9C85DD1968A09AEA576C6173C648F6F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip_ClipExtrapolation
struct  ClipExtrapolation_tC55410C9E61EC3868549509F094A83E2E8314783 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip_ClipExtrapolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipExtrapolation_tC55410C9E61EC3868549509F094A83E2E8314783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TargetFinder
struct  TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder_TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder_TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargets_1)); }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderState_3)); }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mNewResults_4)); }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewResults_4), (void*)value);
	}
};


// Vuforia.TrackableBehaviour_Status
struct  Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour_StatusInfo
struct  StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackerData_PoseData
#pragma pack(push, tp, 1)
struct  PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData_PoseData::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData_PoseData::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_1;
	// System.Int32 Vuforia.TrackerData_PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___orientation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Entities.SceneSection
struct  SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E 
{
public:
	// Unity.Entities.Hash128 Unity.Entities.SceneSection::SceneGUID
	Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  ___SceneGUID_0;
	// System.Int32 Unity.Entities.SceneSection::Section
	int32_t ___Section_1;

public:
	inline static int32_t get_offset_of_SceneGUID_0() { return static_cast<int32_t>(offsetof(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E, ___SceneGUID_0)); }
	inline Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  get_SceneGUID_0() const { return ___SceneGUID_0; }
	inline Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * get_address_of_SceneGUID_0() { return &___SceneGUID_0; }
	inline void set_SceneGUID_0(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  value)
	{
		___SceneGUID_0 = value;
	}

	inline static int32_t get_offset_of_Section_1() { return static_cast<int32_t>(offsetof(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E, ___Section_1)); }
	inline int32_t get_Section_1() const { return ___Section_1; }
	inline int32_t* get_address_of_Section_1() { return &___Section_1; }
	inline void set_Section_1(int32_t value)
	{
		___Section_1 = value;
	}
};


// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct  RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3 
{
public:
	// UnityEngine.Rendering.ScriptableRenderContext UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderContext
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::cmd
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderGraphPool
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;

public:
	inline static int32_t get_offset_of_renderContext_0() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___renderContext_0)); }
	inline ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  get_renderContext_0() const { return ___renderContext_0; }
	inline ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B * get_address_of_renderContext_0() { return &___renderContext_0; }
	inline void set_renderContext_0(ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  value)
	{
		___renderContext_0 = value;
	}

	inline static int32_t get_offset_of_cmd_1() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___cmd_1)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_cmd_1() const { return ___cmd_1; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_cmd_1() { return &___cmd_1; }
	inline void set_cmd_1(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___cmd_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cmd_1), (void*)value);
	}

	inline static int32_t get_offset_of_renderGraphPool_2() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___renderGraphPool_2)); }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * get_renderGraphPool_2() const { return ___renderGraphPool_2; }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 ** get_address_of_renderGraphPool_2() { return &___renderGraphPool_2; }
	inline void set_renderGraphPool_2(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * value)
	{
		___renderGraphPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderGraphPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_resources_3() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___resources_3)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_resources_3() const { return ___resources_3; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_resources_3() { return &___resources_3; }
	inline void set_resources_3(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___resources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resources_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3_marshaled_pinvoke
{
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3_marshaled_com
{
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource
struct  RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<handle>k__BackingField
	int32_t ___U3ChandleU3Ek__BackingField_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<version>k__BackingField
	int32_t ___U3CversionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3ChandleU3Ek__BackingField_0)); }
	inline int32_t get_U3ChandleU3Ek__BackingField_0() const { return ___U3ChandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3ChandleU3Ek__BackingField_0() { return &___U3ChandleU3Ek__BackingField_0; }
	inline void set_U3ChandleU3Ek__BackingField_0(int32_t value)
	{
		___U3ChandleU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CversionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3CversionU3Ek__BackingField_2)); }
	inline int32_t get_U3CversionU3Ek__BackingField_2() const { return ___U3CversionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CversionU3Ek__BackingField_2() { return &___U3CversionU3Ek__BackingField_2; }
	inline void set_U3CversionU3Ek__BackingField_2(int32_t value)
	{
		___U3CversionU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Timeline.TimelineClip
struct  TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip::m_Version
	int32_t ___m_Version_1;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Start
	double ___m_Start_9;
	// System.Double UnityEngine.Timeline.TimelineClip::m_ClipIn
	double ___m_ClipIn_10;
	// UnityEngine.Object UnityEngine.Timeline.TimelineClip::m_Asset
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Asset_11;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Duration
	double ___m_Duration_12;
	// System.Double UnityEngine.Timeline.TimelineClip::m_TimeScale
	double ___m_TimeScale_13;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineClip::m_ParentTrack
	TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * ___m_ParentTrack_14;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseInDuration
	double ___m_EaseInDuration_15;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseOutDuration
	double ___m_EaseOutDuration_16;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendInDuration
	double ___m_BlendInDuration_17;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendOutDuration
	double ___m_BlendOutDuration_18;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixInCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_MixInCurve_19;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixOutCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_MixOutCurve_20;
	// UnityEngine.Timeline.TimelineClip_BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendInCurveMode
	int32_t ___m_BlendInCurveMode_21;
	// UnityEngine.Timeline.TimelineClip_BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendOutCurveMode
	int32_t ___m_BlendOutCurveMode_22;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Timeline.TimelineClip::m_ExposedParameterNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_ExposedParameterNames_23;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TimelineClip::m_AnimationCurves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimationCurves_24;
	// System.Boolean UnityEngine.Timeline.TimelineClip::m_Recordable
	bool ___m_Recordable_25;
	// UnityEngine.Timeline.TimelineClip_ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PostExtrapolationMode
	int32_t ___m_PostExtrapolationMode_26;
	// UnityEngine.Timeline.TimelineClip_ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PreExtrapolationMode
	int32_t ___m_PreExtrapolationMode_27;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PostExtrapolationTime
	double ___m_PostExtrapolationTime_28;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PreExtrapolationTime
	double ___m_PreExtrapolationTime_29;
	// System.String UnityEngine.Timeline.TimelineClip::m_DisplayName
	String_t* ___m_DisplayName_30;

public:
	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_Start_9() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Start_9)); }
	inline double get_m_Start_9() const { return ___m_Start_9; }
	inline double* get_address_of_m_Start_9() { return &___m_Start_9; }
	inline void set_m_Start_9(double value)
	{
		___m_Start_9 = value;
	}

	inline static int32_t get_offset_of_m_ClipIn_10() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_ClipIn_10)); }
	inline double get_m_ClipIn_10() const { return ___m_ClipIn_10; }
	inline double* get_address_of_m_ClipIn_10() { return &___m_ClipIn_10; }
	inline void set_m_ClipIn_10(double value)
	{
		___m_ClipIn_10 = value;
	}

	inline static int32_t get_offset_of_m_Asset_11() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Asset_11)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Asset_11() const { return ___m_Asset_11; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Asset_11() { return &___m_Asset_11; }
	inline void set_m_Asset_11(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Asset_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Duration_12() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Duration_12)); }
	inline double get_m_Duration_12() const { return ___m_Duration_12; }
	inline double* get_address_of_m_Duration_12() { return &___m_Duration_12; }
	inline void set_m_Duration_12(double value)
	{
		___m_Duration_12 = value;
	}

	inline static int32_t get_offset_of_m_TimeScale_13() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_TimeScale_13)); }
	inline double get_m_TimeScale_13() const { return ___m_TimeScale_13; }
	inline double* get_address_of_m_TimeScale_13() { return &___m_TimeScale_13; }
	inline void set_m_TimeScale_13(double value)
	{
		___m_TimeScale_13 = value;
	}

	inline static int32_t get_offset_of_m_ParentTrack_14() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_ParentTrack_14)); }
	inline TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * get_m_ParentTrack_14() const { return ___m_ParentTrack_14; }
	inline TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D ** get_address_of_m_ParentTrack_14() { return &___m_ParentTrack_14; }
	inline void set_m_ParentTrack_14(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * value)
	{
		___m_ParentTrack_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentTrack_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_EaseInDuration_15() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_EaseInDuration_15)); }
	inline double get_m_EaseInDuration_15() const { return ___m_EaseInDuration_15; }
	inline double* get_address_of_m_EaseInDuration_15() { return &___m_EaseInDuration_15; }
	inline void set_m_EaseInDuration_15(double value)
	{
		___m_EaseInDuration_15 = value;
	}

	inline static int32_t get_offset_of_m_EaseOutDuration_16() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_EaseOutDuration_16)); }
	inline double get_m_EaseOutDuration_16() const { return ___m_EaseOutDuration_16; }
	inline double* get_address_of_m_EaseOutDuration_16() { return &___m_EaseOutDuration_16; }
	inline void set_m_EaseOutDuration_16(double value)
	{
		___m_EaseOutDuration_16 = value;
	}

	inline static int32_t get_offset_of_m_BlendInDuration_17() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendInDuration_17)); }
	inline double get_m_BlendInDuration_17() const { return ___m_BlendInDuration_17; }
	inline double* get_address_of_m_BlendInDuration_17() { return &___m_BlendInDuration_17; }
	inline void set_m_BlendInDuration_17(double value)
	{
		___m_BlendInDuration_17 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutDuration_18() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendOutDuration_18)); }
	inline double get_m_BlendOutDuration_18() const { return ___m_BlendOutDuration_18; }
	inline double* get_address_of_m_BlendOutDuration_18() { return &___m_BlendOutDuration_18; }
	inline void set_m_BlendOutDuration_18(double value)
	{
		___m_BlendOutDuration_18 = value;
	}

	inline static int32_t get_offset_of_m_MixInCurve_19() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_MixInCurve_19)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_MixInCurve_19() const { return ___m_MixInCurve_19; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_MixInCurve_19() { return &___m_MixInCurve_19; }
	inline void set_m_MixInCurve_19(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_MixInCurve_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixInCurve_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_MixOutCurve_20() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_MixOutCurve_20)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_MixOutCurve_20() const { return ___m_MixOutCurve_20; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_MixOutCurve_20() { return &___m_MixOutCurve_20; }
	inline void set_m_MixOutCurve_20(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_MixOutCurve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixOutCurve_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlendInCurveMode_21() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendInCurveMode_21)); }
	inline int32_t get_m_BlendInCurveMode_21() const { return ___m_BlendInCurveMode_21; }
	inline int32_t* get_address_of_m_BlendInCurveMode_21() { return &___m_BlendInCurveMode_21; }
	inline void set_m_BlendInCurveMode_21(int32_t value)
	{
		___m_BlendInCurveMode_21 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutCurveMode_22() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendOutCurveMode_22)); }
	inline int32_t get_m_BlendOutCurveMode_22() const { return ___m_BlendOutCurveMode_22; }
	inline int32_t* get_address_of_m_BlendOutCurveMode_22() { return &___m_BlendOutCurveMode_22; }
	inline void set_m_BlendOutCurveMode_22(int32_t value)
	{
		___m_BlendOutCurveMode_22 = value;
	}

	inline static int32_t get_offset_of_m_ExposedParameterNames_23() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_ExposedParameterNames_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_ExposedParameterNames_23() const { return ___m_ExposedParameterNames_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_ExposedParameterNames_23() { return &___m_ExposedParameterNames_23; }
	inline void set_m_ExposedParameterNames_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_ExposedParameterNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExposedParameterNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimationCurves_24() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_AnimationCurves_24)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimationCurves_24() const { return ___m_AnimationCurves_24; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimationCurves_24() { return &___m_AnimationCurves_24; }
	inline void set_m_AnimationCurves_24(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimationCurves_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationCurves_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recordable_25() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Recordable_25)); }
	inline bool get_m_Recordable_25() const { return ___m_Recordable_25; }
	inline bool* get_address_of_m_Recordable_25() { return &___m_Recordable_25; }
	inline void set_m_Recordable_25(bool value)
	{
		___m_Recordable_25 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationMode_26() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PostExtrapolationMode_26)); }
	inline int32_t get_m_PostExtrapolationMode_26() const { return ___m_PostExtrapolationMode_26; }
	inline int32_t* get_address_of_m_PostExtrapolationMode_26() { return &___m_PostExtrapolationMode_26; }
	inline void set_m_PostExtrapolationMode_26(int32_t value)
	{
		___m_PostExtrapolationMode_26 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationMode_27() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PreExtrapolationMode_27)); }
	inline int32_t get_m_PreExtrapolationMode_27() const { return ___m_PreExtrapolationMode_27; }
	inline int32_t* get_address_of_m_PreExtrapolationMode_27() { return &___m_PreExtrapolationMode_27; }
	inline void set_m_PreExtrapolationMode_27(int32_t value)
	{
		___m_PreExtrapolationMode_27 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationTime_28() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PostExtrapolationTime_28)); }
	inline double get_m_PostExtrapolationTime_28() const { return ___m_PostExtrapolationTime_28; }
	inline double* get_address_of_m_PostExtrapolationTime_28() { return &___m_PostExtrapolationTime_28; }
	inline void set_m_PostExtrapolationTime_28(double value)
	{
		___m_PostExtrapolationTime_28 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationTime_29() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PreExtrapolationTime_29)); }
	inline double get_m_PreExtrapolationTime_29() const { return ___m_PreExtrapolationTime_29; }
	inline double* get_address_of_m_PreExtrapolationTime_29() { return &___m_PreExtrapolationTime_29; }
	inline void set_m_PreExtrapolationTime_29(double value)
	{
		___m_PreExtrapolationTime_29 = value;
	}

	inline static int32_t get_offset_of_m_DisplayName_30() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_DisplayName_30)); }
	inline String_t* get_m_DisplayName_30() const { return ___m_DisplayName_30; }
	inline String_t** get_address_of_m_DisplayName_30() { return &___m_DisplayName_30; }
	inline void set_m_DisplayName_30(String_t* value)
	{
		___m_DisplayName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_30), (void*)value);
	}
};

struct TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields
{
public:
	// UnityEngine.Timeline.ClipCaps UnityEngine.Timeline.TimelineClip::kDefaultClipCaps
	int32_t ___kDefaultClipCaps_2;
	// System.Single UnityEngine.Timeline.TimelineClip::kDefaultClipDurationInSeconds
	float ___kDefaultClipDurationInSeconds_3;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMin
	double ___kTimeScaleMin_4;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMax
	double ___kTimeScaleMax_5;
	// System.String UnityEngine.Timeline.TimelineClip::kDefaultCurvesName
	String_t* ___kDefaultCurvesName_6;
	// System.Double UnityEngine.Timeline.TimelineClip::kMinDuration
	double ___kMinDuration_7;
	// System.Double UnityEngine.Timeline.TimelineClip::kMaxTimeValue
	double ___kMaxTimeValue_8;

public:
	inline static int32_t get_offset_of_kDefaultClipCaps_2() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kDefaultClipCaps_2)); }
	inline int32_t get_kDefaultClipCaps_2() const { return ___kDefaultClipCaps_2; }
	inline int32_t* get_address_of_kDefaultClipCaps_2() { return &___kDefaultClipCaps_2; }
	inline void set_kDefaultClipCaps_2(int32_t value)
	{
		___kDefaultClipCaps_2 = value;
	}

	inline static int32_t get_offset_of_kDefaultClipDurationInSeconds_3() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kDefaultClipDurationInSeconds_3)); }
	inline float get_kDefaultClipDurationInSeconds_3() const { return ___kDefaultClipDurationInSeconds_3; }
	inline float* get_address_of_kDefaultClipDurationInSeconds_3() { return &___kDefaultClipDurationInSeconds_3; }
	inline void set_kDefaultClipDurationInSeconds_3(float value)
	{
		___kDefaultClipDurationInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMin_4() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kTimeScaleMin_4)); }
	inline double get_kTimeScaleMin_4() const { return ___kTimeScaleMin_4; }
	inline double* get_address_of_kTimeScaleMin_4() { return &___kTimeScaleMin_4; }
	inline void set_kTimeScaleMin_4(double value)
	{
		___kTimeScaleMin_4 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMax_5() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kTimeScaleMax_5)); }
	inline double get_kTimeScaleMax_5() const { return ___kTimeScaleMax_5; }
	inline double* get_address_of_kTimeScaleMax_5() { return &___kTimeScaleMax_5; }
	inline void set_kTimeScaleMax_5(double value)
	{
		___kTimeScaleMax_5 = value;
	}

	inline static int32_t get_offset_of_kDefaultCurvesName_6() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kDefaultCurvesName_6)); }
	inline String_t* get_kDefaultCurvesName_6() const { return ___kDefaultCurvesName_6; }
	inline String_t** get_address_of_kDefaultCurvesName_6() { return &___kDefaultCurvesName_6; }
	inline void set_kDefaultCurvesName_6(String_t* value)
	{
		___kDefaultCurvesName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kDefaultCurvesName_6), (void*)value);
	}

	inline static int32_t get_offset_of_kMinDuration_7() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kMinDuration_7)); }
	inline double get_kMinDuration_7() const { return ___kMinDuration_7; }
	inline double* get_address_of_kMinDuration_7() { return &___kMinDuration_7; }
	inline void set_kMinDuration_7(double value)
	{
		___kMinDuration_7 = value;
	}

	inline static int32_t get_offset_of_kMaxTimeValue_8() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kMaxTimeValue_8)); }
	inline double get_kMaxTimeValue_8() const { return ___kMaxTimeValue_8; }
	inline double* get_address_of_kMaxTimeValue_8() { return &___kMaxTimeValue_8; }
	inline void set_kMaxTimeValue_8(double value)
	{
		___kMaxTimeValue_8 = value;
	}
};


// Vuforia.ImageTargetFinder
struct  ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957  : public TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC
{
public:

public:
};


// Vuforia.TrackerData_TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_TrackableResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData_TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInfo
	int32_t ___statusInfo_3;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::id
	int32_t ___id_4;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_statusInfo_3() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___statusInfo_3)); }
	inline int32_t get_statusInfo_3() const { return ___statusInfo_3; }
	inline int32_t* get_address_of_statusInfo_3() { return &___statusInfo_3; }
	inline void set_statusInfo_3(int32_t value)
	{
		___statusInfo_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_VuMarkTargetResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData_VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// System.Func`2<System.Object,Vuforia.TrackableBehaviour_Status>
struct  Func_2_t854A9E275C64086C9E5A8BA5252236753338FCA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour_StatusInfo>
struct  Func_2_t048BF884DEC634DF2C72B18DE0074BEEFCF2C7E6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_Status>
struct  Func_2_t1AF4389885EDCAF20EE4E6FBD0CD50A435897369  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_StatusInfo>
struct  Func_2_tFA00CC82AB530CBB3AE283838E61F2A92D8AADEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_VuMarkTargetResultData,Vuforia.TrackableBehaviour_Status>
struct  Func_2_tD56B3E30FD7CB7B6C9BBEBFD094C2437FD6C5028  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<System.Object>
struct  EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct  RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass
struct  RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035  : public RuntimeObject
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::name
	String_t* ___name_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::index
	int32_t ___index_1;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::customSampler
	ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ___customSampler_2;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::resourceReadList
	List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * ___resourceReadList_3;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::resourceWriteList
	List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8 * ___resourceWriteList_4;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::usedRendererListList
	List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * ___usedRendererListList_5;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::enableAsyncCompute
	bool ___enableAsyncCompute_6;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::m_ColorBuffers
	RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA* ___m_ColorBuffers_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::m_DepthBuffer
	RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___m_DepthBuffer_8;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::m_MaxColorBufferIndex
	int32_t ___m_MaxColorBufferIndex_9;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_customSampler_2() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___customSampler_2)); }
	inline ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * get_customSampler_2() const { return ___customSampler_2; }
	inline ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D ** get_address_of_customSampler_2() { return &___customSampler_2; }
	inline void set_customSampler_2(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * value)
	{
		___customSampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customSampler_2), (void*)value);
	}

	inline static int32_t get_offset_of_resourceReadList_3() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___resourceReadList_3)); }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * get_resourceReadList_3() const { return ___resourceReadList_3; }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A ** get_address_of_resourceReadList_3() { return &___resourceReadList_3; }
	inline void set_resourceReadList_3(List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * value)
	{
		___resourceReadList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceReadList_3), (void*)value);
	}

	inline static int32_t get_offset_of_resourceWriteList_4() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___resourceWriteList_4)); }
	inline List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8 * get_resourceWriteList_4() const { return ___resourceWriteList_4; }
	inline List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8 ** get_address_of_resourceWriteList_4() { return &___resourceWriteList_4; }
	inline void set_resourceWriteList_4(List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8 * value)
	{
		___resourceWriteList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceWriteList_4), (void*)value);
	}

	inline static int32_t get_offset_of_usedRendererListList_5() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___usedRendererListList_5)); }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * get_usedRendererListList_5() const { return ___usedRendererListList_5; }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A ** get_address_of_usedRendererListList_5() { return &___usedRendererListList_5; }
	inline void set_usedRendererListList_5(List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * value)
	{
		___usedRendererListList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedRendererListList_5), (void*)value);
	}

	inline static int32_t get_offset_of_enableAsyncCompute_6() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___enableAsyncCompute_6)); }
	inline bool get_enableAsyncCompute_6() const { return ___enableAsyncCompute_6; }
	inline bool* get_address_of_enableAsyncCompute_6() { return &___enableAsyncCompute_6; }
	inline void set_enableAsyncCompute_6(bool value)
	{
		___enableAsyncCompute_6 = value;
	}

	inline static int32_t get_offset_of_m_ColorBuffers_7() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___m_ColorBuffers_7)); }
	inline RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA* get_m_ColorBuffers_7() const { return ___m_ColorBuffers_7; }
	inline RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA** get_address_of_m_ColorBuffers_7() { return &___m_ColorBuffers_7; }
	inline void set_m_ColorBuffers_7(RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA* value)
	{
		___m_ColorBuffers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorBuffers_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthBuffer_8() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___m_DepthBuffer_8)); }
	inline RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  get_m_DepthBuffer_8() const { return ___m_DepthBuffer_8; }
	inline RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524 * get_address_of_m_DepthBuffer_8() { return &___m_DepthBuffer_8; }
	inline void set_m_DepthBuffer_8(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  value)
	{
		___m_DepthBuffer_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxColorBufferIndex_9() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___m_MaxColorBufferIndex_9)); }
	inline int32_t get_m_MaxColorBufferIndex_9() const { return ___m_MaxColorBufferIndex_9; }
	inline int32_t* get_address_of_m_MaxColorBufferIndex_9() { return &___m_MaxColorBufferIndex_9; }
	inline void set_m_MaxColorBufferIndex_9(int32_t value)
	{
		___m_MaxColorBufferIndex_9 = value;
	}
};


// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass`1<System.Object>
struct  RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8  : public RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035
{
public:
	// PassData UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass`1::data
	RuntimeObject * ___data_10;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass`1::renderFunc
	RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * ___renderFunc_11;

public:
	inline static int32_t get_offset_of_data_10() { return static_cast<int32_t>(offsetof(RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8, ___data_10)); }
	inline RuntimeObject * get_data_10() const { return ___data_10; }
	inline RuntimeObject ** get_address_of_data_10() { return &___data_10; }
	inline void set_data_10(RuntimeObject * value)
	{
		___data_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_10), (void*)value);
	}

	inline static int32_t get_offset_of_renderFunc_11() { return static_cast<int32_t>(offsetof(RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8, ___renderFunc_11)); }
	inline RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * get_renderFunc_11() const { return ___renderFunc_11; }
	inline RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 ** get_address_of_renderFunc_11() { return &___renderFunc_11; }
	inline void set_renderFunc_11(RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * value)
	{
		___renderFunc_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderFunc_11), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Timeline.TrackAsset
struct  TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_11;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_12;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_13;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_Curves_14;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * ___m_Parent_15;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Children_16;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_17;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* ___m_ClipsCache_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_Start_19;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_End_20;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_21;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___m_SupportsNotifications_22;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_24;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * ___m_Clips_26;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  ___m_Markers_27;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_AnimClip_6)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_11() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Locked_11)); }
	inline bool get_m_Locked_11() const { return ___m_Locked_11; }
	inline bool* get_address_of_m_Locked_11() { return &___m_Locked_11; }
	inline void set_m_Locked_11(bool value)
	{
		___m_Locked_11 = value;
	}

	inline static int32_t get_offset_of_m_Muted_12() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Muted_12)); }
	inline bool get_m_Muted_12() const { return ___m_Muted_12; }
	inline bool* get_address_of_m_Muted_12() { return &___m_Muted_12; }
	inline void set_m_Muted_12(bool value)
	{
		___m_Muted_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_13() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CustomPlayableFullTypename_13)); }
	inline String_t* get_m_CustomPlayableFullTypename_13() const { return ___m_CustomPlayableFullTypename_13; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_13() { return &___m_CustomPlayableFullTypename_13; }
	inline void set_m_CustomPlayableFullTypename_13(String_t* value)
	{
		___m_CustomPlayableFullTypename_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_14() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Curves_14)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_Curves_14() const { return ___m_Curves_14; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_Curves_14() { return &___m_Curves_14; }
	inline void set_m_Curves_14(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_Curves_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_15() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Parent_15)); }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * get_m_Parent_15() const { return ___m_Parent_15; }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD ** get_address_of_m_Parent_15() { return &___m_Parent_15; }
	inline void set_m_Parent_15(PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * value)
	{
		___m_Parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_16() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Children_16)); }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * get_m_Children_16() const { return ___m_Children_16; }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E ** get_address_of_m_Children_16() { return &___m_Children_16; }
	inline void set_m_Children_16(List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * value)
	{
		___m_Children_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_17() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ItemsHash_17)); }
	inline int32_t get_m_ItemsHash_17() const { return ___m_ItemsHash_17; }
	inline int32_t* get_address_of_m_ItemsHash_17() { return &___m_ItemsHash_17; }
	inline void set_m_ItemsHash_17(int32_t value)
	{
		___m_ItemsHash_17 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_18() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ClipsCache_18)); }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* get_m_ClipsCache_18() const { return ___m_ClipsCache_18; }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E** get_address_of_m_ClipsCache_18() { return &___m_ClipsCache_18; }
	inline void set_m_ClipsCache_18(TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* value)
	{
		___m_ClipsCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_19() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Start_19)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_Start_19() const { return ___m_Start_19; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_Start_19() { return &___m_Start_19; }
	inline void set_m_Start_19(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_Start_19 = value;
	}

	inline static int32_t get_offset_of_m_End_20() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_End_20)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_End_20() const { return ___m_End_20; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_End_20() { return &___m_End_20; }
	inline void set_m_End_20(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_End_20 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_21() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CacheSorted_21)); }
	inline bool get_m_CacheSorted_21() const { return ___m_CacheSorted_21; }
	inline bool* get_address_of_m_CacheSorted_21() { return &___m_CacheSorted_21; }
	inline void set_m_CacheSorted_21(bool value)
	{
		___m_CacheSorted_21 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_22() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_SupportsNotifications_22)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_m_SupportsNotifications_22() const { return ___m_SupportsNotifications_22; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_m_SupportsNotifications_22() { return &___m_SupportsNotifications_22; }
	inline void set_m_SupportsNotifications_22(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___m_SupportsNotifications_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ChildTrackCache_24)); }
	inline RuntimeObject* get_m_ChildTrackCache_24() const { return ___m_ChildTrackCache_24; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_24() { return &___m_ChildTrackCache_24; }
	inline void set_m_ChildTrackCache_24(RuntimeObject* value)
	{
		___m_ChildTrackCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_26() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Clips_26)); }
	inline List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * get_m_Clips_26() const { return ___m_Clips_26; }
	inline List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 ** get_address_of_m_Clips_26() { return &___m_Clips_26; }
	inline void set_m_Clips_26(List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * value)
	{
		___m_Clips_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_27() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Markers_27)); }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  get_m_Markers_27() const { return ___m_Markers_27; }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC * get_address_of_m_Markers_27() { return &___m_Markers_27; }
	inline void set_m_Markers_27(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  value)
	{
		___m_Markers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset_TransientBuildData UnityEngine.Timeline.TrackAsset::s_BuildData
	TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  ___s_BuildData_7;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E * ___OnClipPlayableCreate_9;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E * ___OnTrackAnimationPlayableCreate_10;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* ___s_EmptyCache_23;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 * ___s_TrackBindingTypeAttributeCache_25;

public:
	inline static int32_t get_offset_of_s_BuildData_7() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_BuildData_7)); }
	inline TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  get_s_BuildData_7() const { return ___s_BuildData_7; }
	inline TransientBuildData_t2CDF71634041677EC226311F30665780C2026744 * get_address_of_s_BuildData_7() { return &___s_BuildData_7; }
	inline void set_s_BuildData_7(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  value)
	{
		___s_BuildData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___trackList_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___clipList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___markerList_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OnClipPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnClipPlayableCreate_9)); }
	inline Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E * get_OnClipPlayableCreate_9() const { return ___OnClipPlayableCreate_9; }
	inline Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E ** get_address_of_OnClipPlayableCreate_9() { return &___OnClipPlayableCreate_9; }
	inline void set_OnClipPlayableCreate_9(Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E * value)
	{
		___OnClipPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_10() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnTrackAnimationPlayableCreate_10)); }
	inline Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E * get_OnTrackAnimationPlayableCreate_10() const { return ___OnTrackAnimationPlayableCreate_10; }
	inline Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E ** get_address_of_OnTrackAnimationPlayableCreate_10() { return &___OnTrackAnimationPlayableCreate_10; }
	inline void set_OnTrackAnimationPlayableCreate_10(Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E * value)
	{
		___OnTrackAnimationPlayableCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_EmptyCache_23)); }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* get_s_EmptyCache_23() const { return ___s_EmptyCache_23; }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5** get_address_of_s_EmptyCache_23() { return &___s_EmptyCache_23; }
	inline void set_s_EmptyCache_23(TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* value)
	{
		___s_EmptyCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_25() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_TrackBindingTypeAttributeCache_25)); }
	inline Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 * get_s_TrackBindingTypeAttributeCache_25() const { return ___s_TrackBindingTypeAttributeCache_25; }
	inline Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 ** get_address_of_s_TrackBindingTypeAttributeCache_25() { return &___s_TrackBindingTypeAttributeCache_25; }
	inline void set_s_TrackBindingTypeAttributeCache_25(Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 * value)
	{
		___s_TrackBindingTypeAttributeCache_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_25), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer
struct  PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform UnityEngine.Rendering.PostProcessing.PostProcessLayer::volumeTrigger
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___volumeTrigger_4;
	// UnityEngine.LayerMask UnityEngine.Rendering.PostProcessing.PostProcessLayer::volumeLayer
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___volumeLayer_5;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::stopNaNPropagation
	bool ___stopNaNPropagation_6;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::finalBlitToCameraTarget
	bool ___finalBlitToCameraTarget_7;
	// UnityEngine.Rendering.PostProcessing.PostProcessLayer_Antialiasing UnityEngine.Rendering.PostProcessing.PostProcessLayer::antialiasingMode
	int32_t ___antialiasingMode_8;
	// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing UnityEngine.Rendering.PostProcessing.PostProcessLayer::temporalAntialiasing
	TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1 * ___temporalAntialiasing_9;
	// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing UnityEngine.Rendering.PostProcessing.PostProcessLayer::subpixelMorphologicalAntialiasing
	SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD * ___subpixelMorphologicalAntialiasing_10;
	// UnityEngine.Rendering.PostProcessing.FastApproximateAntialiasing UnityEngine.Rendering.PostProcessing.PostProcessLayer::fastApproximateAntialiasing
	FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D * ___fastApproximateAntialiasing_11;
	// UnityEngine.Rendering.PostProcessing.Fog UnityEngine.Rendering.PostProcessing.PostProcessLayer::fog
	Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77 * ___fog_12;
	// UnityEngine.Rendering.PostProcessing.Dithering UnityEngine.Rendering.PostProcessing.PostProcessLayer::dithering
	Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0 * ___dithering_13;
	// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer UnityEngine.Rendering.PostProcessing.PostProcessLayer::debugLayer
	PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39 * ___debugLayer_14;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_Resources
	PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * ___m_Resources_15;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_OldResources
	PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * ___m_OldResources_16;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_ShowToolkit
	bool ___m_ShowToolkit_17;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_ShowCustomSorter
	bool ___m_ShowCustomSorter_18;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::breakBeforeColorGrading
	bool ___breakBeforeColorGrading_19;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer_SerializedBundleRef> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_BeforeTransparentBundles
	List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * ___m_BeforeTransparentBundles_20;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer_SerializedBundleRef> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_BeforeStackBundles
	List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * ___m_BeforeStackBundles_21;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer_SerializedBundleRef> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_AfterStackBundles
	List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * ___m_AfterStackBundles_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Rendering.PostProcessing.PostProcessEvent,System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer_SerializedBundleRef>> UnityEngine.Rendering.PostProcessing.PostProcessLayer::<sortedBundles>k__BackingField
	Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C * ___U3CsortedBundlesU3Ek__BackingField_23;
	// UnityEngine.DepthTextureMode UnityEngine.Rendering.PostProcessing.PostProcessLayer::<cameraDepthFlags>k__BackingField
	int32_t ___U3CcameraDepthFlagsU3Ek__BackingField_24;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::<haveBundlesBeenInited>k__BackingField
	bool ___U3ChaveBundlesBeenInitedU3Ek__BackingField_25;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_Bundles
	Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D * ___m_Bundles_26;
	// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_PropertySheetFactory
	PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4 * ___m_PropertySheetFactory_27;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LegacyCmdBufferBeforeReflections
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___m_LegacyCmdBufferBeforeReflections_28;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LegacyCmdBufferBeforeLighting
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___m_LegacyCmdBufferBeforeLighting_29;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LegacyCmdBufferOpaque
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___m_LegacyCmdBufferOpaque_30;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LegacyCmdBuffer
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___m_LegacyCmdBuffer_31;
	// UnityEngine.Camera UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_Camera_32;
	// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_CurrentContext
	PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB * ___m_CurrentContext_33;
	// UnityEngine.Rendering.PostProcessing.LogHistogram UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LogHistogram
	LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79 * ___m_LogHistogram_34;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_SettingsUpdateNeeded
	bool ___m_SettingsUpdateNeeded_35;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_IsRenderingInSceneView
	bool ___m_IsRenderingInSceneView_36;
	// UnityEngine.Rendering.PostProcessing.TargetPool UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_TargetPool
	TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949 * ___m_TargetPool_37;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_NaNKilled
	bool ___m_NaNKilled_38;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_ActiveEffects
	List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352 * ___m_ActiveEffects_39;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.RenderTargetIdentifier> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_Targets
	List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918 * ___m_Targets_40;

public:
	inline static int32_t get_offset_of_volumeTrigger_4() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___volumeTrigger_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_volumeTrigger_4() const { return ___volumeTrigger_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_volumeTrigger_4() { return &___volumeTrigger_4; }
	inline void set_volumeTrigger_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___volumeTrigger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___volumeTrigger_4), (void*)value);
	}

	inline static int32_t get_offset_of_volumeLayer_5() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___volumeLayer_5)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_volumeLayer_5() const { return ___volumeLayer_5; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_volumeLayer_5() { return &___volumeLayer_5; }
	inline void set_volumeLayer_5(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___volumeLayer_5 = value;
	}

	inline static int32_t get_offset_of_stopNaNPropagation_6() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___stopNaNPropagation_6)); }
	inline bool get_stopNaNPropagation_6() const { return ___stopNaNPropagation_6; }
	inline bool* get_address_of_stopNaNPropagation_6() { return &___stopNaNPropagation_6; }
	inline void set_stopNaNPropagation_6(bool value)
	{
		___stopNaNPropagation_6 = value;
	}

	inline static int32_t get_offset_of_finalBlitToCameraTarget_7() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___finalBlitToCameraTarget_7)); }
	inline bool get_finalBlitToCameraTarget_7() const { return ___finalBlitToCameraTarget_7; }
	inline bool* get_address_of_finalBlitToCameraTarget_7() { return &___finalBlitToCameraTarget_7; }
	inline void set_finalBlitToCameraTarget_7(bool value)
	{
		___finalBlitToCameraTarget_7 = value;
	}

	inline static int32_t get_offset_of_antialiasingMode_8() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___antialiasingMode_8)); }
	inline int32_t get_antialiasingMode_8() const { return ___antialiasingMode_8; }
	inline int32_t* get_address_of_antialiasingMode_8() { return &___antialiasingMode_8; }
	inline void set_antialiasingMode_8(int32_t value)
	{
		___antialiasingMode_8 = value;
	}

	inline static int32_t get_offset_of_temporalAntialiasing_9() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___temporalAntialiasing_9)); }
	inline TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1 * get_temporalAntialiasing_9() const { return ___temporalAntialiasing_9; }
	inline TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1 ** get_address_of_temporalAntialiasing_9() { return &___temporalAntialiasing_9; }
	inline void set_temporalAntialiasing_9(TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1 * value)
	{
		___temporalAntialiasing_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temporalAntialiasing_9), (void*)value);
	}

	inline static int32_t get_offset_of_subpixelMorphologicalAntialiasing_10() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___subpixelMorphologicalAntialiasing_10)); }
	inline SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD * get_subpixelMorphologicalAntialiasing_10() const { return ___subpixelMorphologicalAntialiasing_10; }
	inline SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD ** get_address_of_subpixelMorphologicalAntialiasing_10() { return &___subpixelMorphologicalAntialiasing_10; }
	inline void set_subpixelMorphologicalAntialiasing_10(SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD * value)
	{
		___subpixelMorphologicalAntialiasing_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subpixelMorphologicalAntialiasing_10), (void*)value);
	}

	inline static int32_t get_offset_of_fastApproximateAntialiasing_11() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___fastApproximateAntialiasing_11)); }
	inline FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D * get_fastApproximateAntialiasing_11() const { return ___fastApproximateAntialiasing_11; }
	inline FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D ** get_address_of_fastApproximateAntialiasing_11() { return &___fastApproximateAntialiasing_11; }
	inline void set_fastApproximateAntialiasing_11(FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D * value)
	{
		___fastApproximateAntialiasing_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fastApproximateAntialiasing_11), (void*)value);
	}

	inline static int32_t get_offset_of_fog_12() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___fog_12)); }
	inline Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77 * get_fog_12() const { return ___fog_12; }
	inline Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77 ** get_address_of_fog_12() { return &___fog_12; }
	inline void set_fog_12(Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77 * value)
	{
		___fog_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fog_12), (void*)value);
	}

	inline static int32_t get_offset_of_dithering_13() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___dithering_13)); }
	inline Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0 * get_dithering_13() const { return ___dithering_13; }
	inline Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0 ** get_address_of_dithering_13() { return &___dithering_13; }
	inline void set_dithering_13(Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0 * value)
	{
		___dithering_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dithering_13), (void*)value);
	}

	inline static int32_t get_offset_of_debugLayer_14() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___debugLayer_14)); }
	inline PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39 * get_debugLayer_14() const { return ___debugLayer_14; }
	inline PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39 ** get_address_of_debugLayer_14() { return &___debugLayer_14; }
	inline void set_debugLayer_14(PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39 * value)
	{
		___debugLayer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugLayer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resources_15() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_Resources_15)); }
	inline PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * get_m_Resources_15() const { return ___m_Resources_15; }
	inline PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B ** get_address_of_m_Resources_15() { return &___m_Resources_15; }
	inline void set_m_Resources_15(PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * value)
	{
		___m_Resources_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_OldResources_16() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_OldResources_16)); }
	inline PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * get_m_OldResources_16() const { return ___m_OldResources_16; }
	inline PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B ** get_address_of_m_OldResources_16() { return &___m_OldResources_16; }
	inline void set_m_OldResources_16(PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * value)
	{
		___m_OldResources_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OldResources_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShowToolkit_17() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_ShowToolkit_17)); }
	inline bool get_m_ShowToolkit_17() const { return ___m_ShowToolkit_17; }
	inline bool* get_address_of_m_ShowToolkit_17() { return &___m_ShowToolkit_17; }
	inline void set_m_ShowToolkit_17(bool value)
	{
		___m_ShowToolkit_17 = value;
	}

	inline static int32_t get_offset_of_m_ShowCustomSorter_18() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_ShowCustomSorter_18)); }
	inline bool get_m_ShowCustomSorter_18() const { return ___m_ShowCustomSorter_18; }
	inline bool* get_address_of_m_ShowCustomSorter_18() { return &___m_ShowCustomSorter_18; }
	inline void set_m_ShowCustomSorter_18(bool value)
	{
		___m_ShowCustomSorter_18 = value;
	}

	inline static int32_t get_offset_of_breakBeforeColorGrading_19() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___breakBeforeColorGrading_19)); }
	inline bool get_breakBeforeColorGrading_19() const { return ___breakBeforeColorGrading_19; }
	inline bool* get_address_of_breakBeforeColorGrading_19() { return &___breakBeforeColorGrading_19; }
	inline void set_breakBeforeColorGrading_19(bool value)
	{
		___breakBeforeColorGrading_19 = value;
	}

	inline static int32_t get_offset_of_m_BeforeTransparentBundles_20() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_BeforeTransparentBundles_20)); }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * get_m_BeforeTransparentBundles_20() const { return ___m_BeforeTransparentBundles_20; }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 ** get_address_of_m_BeforeTransparentBundles_20() { return &___m_BeforeTransparentBundles_20; }
	inline void set_m_BeforeTransparentBundles_20(List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * value)
	{
		___m_BeforeTransparentBundles_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BeforeTransparentBundles_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_BeforeStackBundles_21() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_BeforeStackBundles_21)); }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * get_m_BeforeStackBundles_21() const { return ___m_BeforeStackBundles_21; }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 ** get_address_of_m_BeforeStackBundles_21() { return &___m_BeforeStackBundles_21; }
	inline void set_m_BeforeStackBundles_21(List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * value)
	{
		___m_BeforeStackBundles_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BeforeStackBundles_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_AfterStackBundles_22() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_AfterStackBundles_22)); }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * get_m_AfterStackBundles_22() const { return ___m_AfterStackBundles_22; }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 ** get_address_of_m_AfterStackBundles_22() { return &___m_AfterStackBundles_22; }
	inline void set_m_AfterStackBundles_22(List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * value)
	{
		___m_AfterStackBundles_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AfterStackBundles_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsortedBundlesU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___U3CsortedBundlesU3Ek__BackingField_23)); }
	inline Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C * get_U3CsortedBundlesU3Ek__BackingField_23() const { return ___U3CsortedBundlesU3Ek__BackingField_23; }
	inline Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C ** get_address_of_U3CsortedBundlesU3Ek__BackingField_23() { return &___U3CsortedBundlesU3Ek__BackingField_23; }
	inline void set_U3CsortedBundlesU3Ek__BackingField_23(Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C * value)
	{
		___U3CsortedBundlesU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsortedBundlesU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcameraDepthFlagsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___U3CcameraDepthFlagsU3Ek__BackingField_24)); }
	inline int32_t get_U3CcameraDepthFlagsU3Ek__BackingField_24() const { return ___U3CcameraDepthFlagsU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CcameraDepthFlagsU3Ek__BackingField_24() { return &___U3CcameraDepthFlagsU3Ek__BackingField_24; }
	inline void set_U3CcameraDepthFlagsU3Ek__BackingField_24(int32_t value)
	{
		___U3CcameraDepthFlagsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3ChaveBundlesBeenInitedU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___U3ChaveBundlesBeenInitedU3Ek__BackingField_25)); }
	inline bool get_U3ChaveBundlesBeenInitedU3Ek__BackingField_25() const { return ___U3ChaveBundlesBeenInitedU3Ek__BackingField_25; }
	inline bool* get_address_of_U3ChaveBundlesBeenInitedU3Ek__BackingField_25() { return &___U3ChaveBundlesBeenInitedU3Ek__BackingField_25; }
	inline void set_U3ChaveBundlesBeenInitedU3Ek__BackingField_25(bool value)
	{
		___U3ChaveBundlesBeenInitedU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_m_Bundles_26() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_Bundles_26)); }
	inline Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D * get_m_Bundles_26() const { return ___m_Bundles_26; }
	inline Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D ** get_address_of_m_Bundles_26() { return &___m_Bundles_26; }
	inline void set_m_Bundles_26(Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D * value)
	{
		___m_Bundles_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bundles_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertySheetFactory_27() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_PropertySheetFactory_27)); }
	inline PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4 * get_m_PropertySheetFactory_27() const { return ___m_PropertySheetFactory_27; }
	inline PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4 ** get_address_of_m_PropertySheetFactory_27() { return &___m_PropertySheetFactory_27; }
	inline void set_m_PropertySheetFactory_27(PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4 * value)
	{
		___m_PropertySheetFactory_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertySheetFactory_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyCmdBufferBeforeReflections_28() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LegacyCmdBufferBeforeReflections_28)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_m_LegacyCmdBufferBeforeReflections_28() const { return ___m_LegacyCmdBufferBeforeReflections_28; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_m_LegacyCmdBufferBeforeReflections_28() { return &___m_LegacyCmdBufferBeforeReflections_28; }
	inline void set_m_LegacyCmdBufferBeforeReflections_28(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___m_LegacyCmdBufferBeforeReflections_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyCmdBufferBeforeReflections_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyCmdBufferBeforeLighting_29() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LegacyCmdBufferBeforeLighting_29)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_m_LegacyCmdBufferBeforeLighting_29() const { return ___m_LegacyCmdBufferBeforeLighting_29; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_m_LegacyCmdBufferBeforeLighting_29() { return &___m_LegacyCmdBufferBeforeLighting_29; }
	inline void set_m_LegacyCmdBufferBeforeLighting_29(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___m_LegacyCmdBufferBeforeLighting_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyCmdBufferBeforeLighting_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyCmdBufferOpaque_30() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LegacyCmdBufferOpaque_30)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_m_LegacyCmdBufferOpaque_30() const { return ___m_LegacyCmdBufferOpaque_30; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_m_LegacyCmdBufferOpaque_30() { return &___m_LegacyCmdBufferOpaque_30; }
	inline void set_m_LegacyCmdBufferOpaque_30(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___m_LegacyCmdBufferOpaque_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyCmdBufferOpaque_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyCmdBuffer_31() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LegacyCmdBuffer_31)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_m_LegacyCmdBuffer_31() const { return ___m_LegacyCmdBuffer_31; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_m_LegacyCmdBuffer_31() { return &___m_LegacyCmdBuffer_31; }
	inline void set_m_LegacyCmdBuffer_31(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___m_LegacyCmdBuffer_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyCmdBuffer_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_32() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_Camera_32)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_Camera_32() const { return ___m_Camera_32; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_Camera_32() { return &___m_Camera_32; }
	inline void set_m_Camera_32(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_Camera_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentContext_33() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_CurrentContext_33)); }
	inline PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB * get_m_CurrentContext_33() const { return ___m_CurrentContext_33; }
	inline PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB ** get_address_of_m_CurrentContext_33() { return &___m_CurrentContext_33; }
	inline void set_m_CurrentContext_33(PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB * value)
	{
		___m_CurrentContext_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentContext_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_LogHistogram_34() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LogHistogram_34)); }
	inline LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79 * get_m_LogHistogram_34() const { return ___m_LogHistogram_34; }
	inline LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79 ** get_address_of_m_LogHistogram_34() { return &___m_LogHistogram_34; }
	inline void set_m_LogHistogram_34(LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79 * value)
	{
		___m_LogHistogram_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LogHistogram_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_SettingsUpdateNeeded_35() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_SettingsUpdateNeeded_35)); }
	inline bool get_m_SettingsUpdateNeeded_35() const { return ___m_SettingsUpdateNeeded_35; }
	inline bool* get_address_of_m_SettingsUpdateNeeded_35() { return &___m_SettingsUpdateNeeded_35; }
	inline void set_m_SettingsUpdateNeeded_35(bool value)
	{
		___m_SettingsUpdateNeeded_35 = value;
	}

	inline static int32_t get_offset_of_m_IsRenderingInSceneView_36() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_IsRenderingInSceneView_36)); }
	inline bool get_m_IsRenderingInSceneView_36() const { return ___m_IsRenderingInSceneView_36; }
	inline bool* get_address_of_m_IsRenderingInSceneView_36() { return &___m_IsRenderingInSceneView_36; }
	inline void set_m_IsRenderingInSceneView_36(bool value)
	{
		___m_IsRenderingInSceneView_36 = value;
	}

	inline static int32_t get_offset_of_m_TargetPool_37() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_TargetPool_37)); }
	inline TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949 * get_m_TargetPool_37() const { return ___m_TargetPool_37; }
	inline TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949 ** get_address_of_m_TargetPool_37() { return &___m_TargetPool_37; }
	inline void set_m_TargetPool_37(TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949 * value)
	{
		___m_TargetPool_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetPool_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_NaNKilled_38() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_NaNKilled_38)); }
	inline bool get_m_NaNKilled_38() const { return ___m_NaNKilled_38; }
	inline bool* get_address_of_m_NaNKilled_38() { return &___m_NaNKilled_38; }
	inline void set_m_NaNKilled_38(bool value)
	{
		___m_NaNKilled_38 = value;
	}

	inline static int32_t get_offset_of_m_ActiveEffects_39() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_ActiveEffects_39)); }
	inline List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352 * get_m_ActiveEffects_39() const { return ___m_ActiveEffects_39; }
	inline List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352 ** get_address_of_m_ActiveEffects_39() { return &___m_ActiveEffects_39; }
	inline void set_m_ActiveEffects_39(List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352 * value)
	{
		___m_ActiveEffects_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveEffects_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_Targets_40() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_Targets_40)); }
	inline List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918 * get_m_Targets_40() const { return ___m_Targets_40; }
	inline List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918 ** get_address_of_m_Targets_40() { return &___m_Targets_40; }
	inline void set_m_Targets_40(List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918 * value)
	{
		___m_Targets_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Targets_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// !0 System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>::MoveNext()
inline bool Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233 (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * __this, int32_t ___count0, int32_t ___stride1, const RuntimeMethod* method);
// System.Int32 UnityEngine.ComputeBuffer::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeBuffer_get_count_m2D80EF2880723F6627924C0ABC642D8DB538D04D (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Dispose_m002F431B0EBF0B24DF20C7EB8FC2F44B596A6FFE (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPass_Clear_m216A695EE93282211427AFAE4876C742D5CBE627 (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>::get_Count()
inline int32_t List_1_get_Count_m0B6FAC22324A918CFA9E37637257E82823029437_inline (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>::Add(!0)
inline void List_1_Add_m011F5FA3CC5FBB00875D2C3615DED27D6CE38D60 (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * __this, RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *, RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::.ctor(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass,UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderGraphBuilder__ctor_m3EB345CC9E313C7C6EADFF534CA50FAF440D75CC (RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312 * __this, RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___renderPass0, RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_mD90FFC4A70E16AFA81AC6C9CFF174630F77C608C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_inline (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_inline (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableHandle::GetTimeWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetTimeWrapMode_m75A158632EDF7752DB7675965A961C61F02F68BD (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableHandle::GetPlayState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetPlayState_m080CF2B647260A57E27E0FCDF65D92547DE8912E (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableHandle::GetInput(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableHandle_GetInput_mBDC7706AEC48332E896AD885CC4DFB71D05D39A1 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, int32_t ___inputPort0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0 (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableOutputHandle_GetSourcePlayable_mCD956832B4DD487FAFFA1669BAF5DC82A13BF625 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// UnityEngine.Rendering.PostProcessing.PostProcessBundle UnityEngine.Rendering.PostProcessing.PostProcessLayer::GetBundle(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PostProcessBundle_tE29C05526676DF2148A37681C517E85FD98BE225 * PostProcessLayer_GetBundle_m2C6648E5FBBF817FE59EFFD64EFE89049A073641 (PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2 * __this, Type_t * ___settingsType0, const RuntimeMethod* method);
// UnityEngine.Timeline.TimelineClip UnityEngine.Timeline.TrackAsset::CreateClip(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * TrackAsset_CreateClip_m13AE8DFB7EB2AF8FD1F0CCEE1F6FBEEBABC8EEC5 (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, Type_t * ___requestedType0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mD59E4204584135A12DCA06596881B7BEB93616F5 (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * __this, Type_t * ___key0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18 (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Vuforia.ImageTargetFinder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetFinder__ctor_m68412DD938E09F63B7837EBBB6B0E585EC35C32F (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * __this, intptr_t ___targetFinderPtr0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m178261C9451569356F8398040DA6BCE205F08ADC (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * __this, Type_t * ___key0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<Unity.Entities.EditorRenderData,System.UInt64>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mDBC749E123BCB51DF0EA39DD3C90CB23BFFA01A4_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * ___property1, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * ___container2, uint64_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mDBC749E123BCB51DF0EA39DD3C90CB23BFFA01A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_13 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_14 = ___container2;
		uint64_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t* >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<Unity.Entities.EditorRenderData,System.UInt64>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_13, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_14, (uint64_t*)(uint64_t*)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_18 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_19 = ___container2;
		uint64_t* L_20 = ___value3;
		uint64_t L_21 = (*(uint64_t*)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<Unity.Entities.EditorRenderData,System.UInt64>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_19, (uint64_t)L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_24 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_25 = ___container2;
		uint64_t* L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_24, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_25, (uint64_t*)(uint64_t*)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_29 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_30 = ___container2;
		uint64_t* L_31 = ___value3;
		uint64_t L_32 = (*(uint64_t*)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_30, (uint64_t)L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_35 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_36 = ___container2;
		uint64_t* L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_35, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_36, (uint64_t*)(uint64_t*)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<Unity.Entities.Entity,System.Int32>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5AA68128B37231F711E68254FCF81AAB48CA90EF_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * ___property1, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5AA68128B37231F711E68254FCF81AAB48CA90EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_13 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t* >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<Unity.Entities.Entity,System.Int32>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_13, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_14, (int32_t*)(int32_t*)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_18 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_19 = ___container2;
		int32_t* L_20 = ___value3;
		int32_t L_21 = (*(int32_t*)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<Unity.Entities.Entity,System.Int32>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_19, (int32_t)L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_24 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_25 = ___container2;
		int32_t* L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_24, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_25, (int32_t*)(int32_t*)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_29 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_30 = ___container2;
		int32_t* L_31 = ___value3;
		int32_t L_32 = (*(int32_t*)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_30, (int32_t)L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_35 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_36 = ___container2;
		int32_t* L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_35, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_36, (int32_t*)(int32_t*)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<Unity.Entities.Hash128,Unity.Mathematics.uint4>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m6E40B5E893A472C2565EF9A278B4345A4418F08C_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * ___property1, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * ___container2, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m6E40B5E893A472C2565EF9A278B4345A4418F08C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_13 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_14 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_13, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_14, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_18 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_19 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_20 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_21 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_19, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_24 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_25 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_24, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_25, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_29 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_30 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_31 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_32 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_30, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_35 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_36 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_35, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_36, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<Unity.Entities.SceneSection,System.Int32>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m7FAC93C705087ADBB09639C36F293A9B2ACDBFBC_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * ___property1, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m7FAC93C705087ADBB09639C36F293A9B2ACDBFBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_13 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t* >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<Unity.Entities.SceneSection,System.Int32>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_13, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_14, (int32_t*)(int32_t*)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_18 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_19 = ___container2;
		int32_t* L_20 = ___value3;
		int32_t L_21 = (*(int32_t*)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<Unity.Entities.SceneSection,System.Int32>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_19, (int32_t)L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_24 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_25 = ___container2;
		int32_t* L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_24, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_25, (int32_t*)(int32_t*)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_29 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_30 = ___container2;
		int32_t* L_31 = ___value3;
		int32_t L_32 = (*(int32_t*)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_30, (int32_t)L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_35 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_36 = ___container2;
		int32_t* L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_35, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_36, (int32_t*)(int32_t*)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<Unity.Entities.SceneSection,Unity.Entities.Hash128>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mB82B1D59F276B12AD120419903CCB49567F30F28_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * ___property1, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * ___container2, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mB82B1D59F276B12AD120419903CCB49567F30F28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_13 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_14 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_13, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_14, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_18 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_19 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_20 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_21 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_19, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_24 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_25 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_24, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_25, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_29 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_30 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_31 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_32 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_30, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_35 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_36 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_35, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_36, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<Unity.Entities.SceneTag,Unity.Entities.Entity>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m473CF132AD92CECD19AC693456AF089D0B661450_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * ___property1, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * ___container2, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m473CF132AD92CECD19AC693456AF089D0B661450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_13 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_14 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_13, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_14, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_18 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_19 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_20 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_21 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_19, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_24 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_25 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_24, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_25, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_29 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_30 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_31 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_32 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_30, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_35 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_36 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_35, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_36, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<Unity.Mathematics.uint4,System.UInt32>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mBB6B14CCB0F4303C65940F4823A2C757AB3ED0B8_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * ___property1, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * ___container2, uint32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mBB6B14CCB0F4303C65940F4823A2C757AB3ED0B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_13 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_14 = ___container2;
		uint32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t* >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<Unity.Mathematics.uint4,System.UInt32>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_13, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_14, (uint32_t*)(uint32_t*)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_18 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_19 = ___container2;
		uint32_t* L_20 = ___value3;
		uint32_t L_21 = (*(uint32_t*)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<Unity.Mathematics.uint4,System.UInt32>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_19, (uint32_t)L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_24 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_25 = ___container2;
		uint32_t* L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_24, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_25, (uint32_t*)(uint32_t*)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_29 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_30 = ___container2;
		uint32_t* L_31 = ___value3;
		uint32_t L_32 = (*(uint32_t*)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_30, (uint32_t)L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_35 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_36 = ___container2;
		uint32_t* L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_35, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_36, (uint32_t*)(uint32_t*)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisPropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D_TisRuntimeObject_m7A872F8EE22AD84ECA7FA4E02AA671239FAF7266_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * ___property1, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * ___container2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisPropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D_TisRuntimeObject_m7A872F8EE22AD84ECA7FA4E02AA671239FAF7266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_13 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_14 = ___container2;
		RuntimeObject ** L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject ** >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_13, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_14, (RuntimeObject **)(RuntimeObject **)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_18 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_19 = ___container2;
		RuntimeObject ** L_20 = ___value3;
		RuntimeObject * L_21 = (*(RuntimeObject **)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject * >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_19, (RuntimeObject *)L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_24 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_25 = ___container2;
		RuntimeObject ** L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_24, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_25, (RuntimeObject **)(RuntimeObject **)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_29 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_30 = ___container2;
		RuntimeObject ** L_31 = ___value3;
		RuntimeObject * L_32 = (*(RuntimeObject **)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_30, (RuntimeObject *)L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_35 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_36 = ___container2;
		RuntimeObject ** L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_35, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_36, (RuntimeObject **)(RuntimeObject **)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<UnityEngine.Keyframe,System.Int32Enum>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m8A5D295AF8EEC0BAEC34A55B4514E7CB92623344_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * ___property1, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m8A5D295AF8EEC0BAEC34A55B4514E7CB92623344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_13 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t* >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<UnityEngine.Keyframe,System.Int32Enum>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_13, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_14, (int32_t*)(int32_t*)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_18 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_19 = ___container2;
		int32_t* L_20 = ___value3;
		int32_t L_21 = (*(int32_t*)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<UnityEngine.Keyframe,System.Int32Enum>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_19, (int32_t)L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_24 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_25 = ___container2;
		int32_t* L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_24, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_25, (int32_t*)(int32_t*)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_29 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_30 = ___container2;
		int32_t* L_31 = ___value3;
		int32_t L_32 = (*(int32_t*)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_30, (int32_t)L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_35 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_36 = ___container2;
		int32_t* L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_35, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_36, (int32_t*)(int32_t*)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<UnityEngine.Keyframe,System.Single>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m2B095F4126E8B3E2697AB9A0D8338B266F92AA9D_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * ___property1, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * ___container2, float* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m2B095F4126E8B3E2697AB9A0D8338B266F92AA9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_13 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_14 = ___container2;
		float* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<UnityEngine.Keyframe,System.Single>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_13, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_14, (float*)(float*)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_18 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_19 = ___container2;
		float* L_20 = ___value3;
		float L_21 = (*(float*)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<UnityEngine.Keyframe,System.Single>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_19, (float)L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_24 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_25 = ___container2;
		float* L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_24, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_25, (float*)(float*)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_29 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_30 = ___container2;
		float* L_31 = ___value3;
		float L_32 = (*(float*)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_30, (float)L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_35 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_36 = ___container2;
		float* L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_35, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_36, (float*)(float*)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_TisRuntimeObject_m2E907773C0644A9AEF18DFCC89F0C5F009FD4156_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * ___property1, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * ___container2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_TisRuntimeObject_m2E907773C0644A9AEF18DFCC89F0C5F009FD4156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_13 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_14 = ___container2;
		RuntimeObject ** L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject ** >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_13, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_14, (RuntimeObject **)(RuntimeObject **)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_18 = ___property1;
		NullCheck((Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_20 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_21 = ___container2;
		RuntimeObject ** L_22 = ___value3;
		RuntimeObject * L_23 = (*(RuntimeObject **)L_22);
		NullCheck((Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_20);
		VirtActionInvoker2< KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_20, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_21, (RuntimeObject *)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_26 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_27 = ___container2;
		RuntimeObject ** L_28 = ___value3;
		RuntimeObject * L_29 = (*(RuntimeObject **)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_27, (RuntimeObject *)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_34 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_35 = ___container2;
		RuntimeObject ** L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_34, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_35, (RuntimeObject **)(RuntimeObject **)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_39 = ___property1;
		NullCheck((Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_41 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_42 = ___container2;
		RuntimeObject ** L_43 = ___value3;
		RuntimeObject * L_44 = (*(RuntimeObject **)L_43);
		NullCheck((Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_41);
		VirtActionInvoker2< KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_41, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_42, (RuntimeObject *)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_47 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_48 = ___container2;
		RuntimeObject ** L_49 = ___value3;
		RuntimeObject * L_50 = (*(RuntimeObject **)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_48, (RuntimeObject *)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_55 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_56 = ___container2;
		RuntimeObject ** L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_55, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_56, (RuntimeObject **)(RuntimeObject **)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_60 = ___property1;
		NullCheck((Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 * L_62 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_63 = ___container2;
		RuntimeObject ** L_64 = ___value3;
		RuntimeObject * L_65 = (*(RuntimeObject **)L_64);
		NullCheck((Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_62);
		VirtActionInvoker2< KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t101735CDC361B9409F5911DB7CF71D1EB7336B87 *)L_62, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_63, (RuntimeObject *)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mF93C083C78776303C33B47ECC2CD98CF5E18C4E6_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * ___property1, RuntimeObject ** ___container2, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mF93C083C78776303C33B47ECC2CD98CF5E18C4E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_18 = ___property1;
		NullCheck((Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, (Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_22 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_23 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_22);
		NullCheck((Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_20);
		VirtActionInvoker2< RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetValue(TContainer&,TValue) */, (Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_28 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_29 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_39 = ___property1;
		NullCheck((Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, (Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_43 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_44 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_43);
		NullCheck((Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_41);
		VirtActionInvoker2< RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetValue(TContainer&,TValue) */, (Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_49 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_50 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_60 = ___property1;
		NullCheck((Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, (Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_64 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_65 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_64);
		NullCheck((Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_62);
		VirtActionInvoker2< RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetValue(TContainer&,TValue) */, (Property_2_tA9C278C3848D7E15E95874D2BFFD8420B4E1CEA5 *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,System.Int32Enum>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m4DC64BFFAF62A5B328555E1239CABA08B0BBDE45_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * ___property1, RuntimeObject ** ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m4DC64BFFAF62A5B328555E1239CABA08B0BBDE45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *, RuntimeObject **, int32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,System.Int32Enum>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (int32_t*)(int32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_18 = ___property1;
		NullCheck((Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Int32Enum>::get_IsReadOnly() */, (Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		int32_t* L_22 = ___value3;
		int32_t L_23 = (*(int32_t*)L_22);
		NullCheck((Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_20);
		VirtActionInvoker2< RuntimeObject **, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (int32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		int32_t* L_28 = ___value3;
		int32_t L_29 = (*(int32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, int32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,System.Int32Enum>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (int32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		int32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *, RuntimeObject **, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (int32_t*)(int32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_39 = ___property1;
		NullCheck((Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Int32Enum>::get_IsReadOnly() */, (Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		int32_t* L_43 = ___value3;
		int32_t L_44 = (*(int32_t*)L_43);
		NullCheck((Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_41);
		VirtActionInvoker2< RuntimeObject **, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (int32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		int32_t* L_49 = ___value3;
		int32_t L_50 = (*(int32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (int32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		int32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *, RuntimeObject **, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (int32_t*)(int32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_60 = ___property1;
		NullCheck((Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Int32Enum>::get_IsReadOnly() */, (Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		int32_t* L_64 = ___value3;
		int32_t L_65 = (*(int32_t*)L_64);
		NullCheck((Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_62);
		VirtActionInvoker2< RuntimeObject **, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_tFA67B593B40A0637555F9FDBBEDD9E640781D021 *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (int32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,System.Object>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisRuntimeObject_mBFE31B9AAD38F64DCEEA472D4F2D41E6AEFEFE78_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * ___property1, RuntimeObject ** ___container2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisRuntimeObject_mBFE31B9AAD38F64DCEEA472D4F2D41E6AEFEFE78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		RuntimeObject ** L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *, RuntimeObject **, RuntimeObject ** >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,System.Object>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (RuntimeObject **)(RuntimeObject **)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_18 = ___property1;
		NullCheck((Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Object>::get_IsReadOnly() */, (Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		RuntimeObject ** L_22 = ___value3;
		RuntimeObject * L_23 = (*(RuntimeObject **)L_22);
		NullCheck((Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_20);
		VirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (RuntimeObject *)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		RuntimeObject ** L_28 = ___value3;
		RuntimeObject * L_29 = (*(RuntimeObject **)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, RuntimeObject * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,System.Object>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (RuntimeObject *)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		RuntimeObject ** L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *, RuntimeObject **, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (RuntimeObject **)(RuntimeObject **)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_39 = ___property1;
		NullCheck((Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Object>::get_IsReadOnly() */, (Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		RuntimeObject ** L_43 = ___value3;
		RuntimeObject * L_44 = (*(RuntimeObject **)L_43);
		NullCheck((Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_41);
		VirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (RuntimeObject *)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		RuntimeObject ** L_49 = ___value3;
		RuntimeObject * L_50 = (*(RuntimeObject **)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (RuntimeObject *)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		RuntimeObject ** L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *, RuntimeObject **, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (RuntimeObject **)(RuntimeObject **)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_60 = ___property1;
		NullCheck((Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Object>::get_IsReadOnly() */, (Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		RuntimeObject ** L_64 = ___value3;
		RuntimeObject * L_65 = (*(RuntimeObject **)L_64);
		NullCheck((Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_62);
		VirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tAA351FEC83E34D37EE411A639C22FB0FF339C91E *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (RuntimeObject *)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,Unity.Entities.Entity>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mB42106C430BDDED9182AF4D8F08B89EC20AA07D5_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * ___property1, RuntimeObject ** ___container2, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mB42106C430BDDED9182AF4D8F08B89EC20AA07D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,Unity.Entities.Entity>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_18 = ___property1;
		NullCheck((Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_22 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_23 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_22);
		NullCheck((Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_20);
		VirtActionInvoker2< RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_28 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_29 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,Unity.Entities.Entity>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_39 = ___property1;
		NullCheck((Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_43 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_44 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_43);
		NullCheck((Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_41);
		VirtActionInvoker2< RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_49 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_50 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_60 = ___property1;
		NullCheck((Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_64 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_65 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_64);
		NullCheck((Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_62);
		VirtActionInvoker2< RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t5ABF5E89769107D6A8DCC39D9E70119A9EBA0EE7 *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,UnityEngine.Keyframe>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_m32067C8A016809B6DB1CE3001E38B0279EC88038_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * ___property1, RuntimeObject ** ___container2, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_m32067C8A016809B6DB1CE3001E38B0279EC88038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,UnityEngine.Keyframe>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_18 = ___property1;
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::get_IsReadOnly() */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_22 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_23 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_22);
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_20);
		VirtActionInvoker2< RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::SetValue(TContainer&,TValue) */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_28 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_29 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,UnityEngine.Keyframe>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_39 = ___property1;
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::get_IsReadOnly() */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_43 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_44 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_43);
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_41);
		VirtActionInvoker2< RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::SetValue(TContainer&,TValue) */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_49 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_50 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_60 = ___property1;
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::get_IsReadOnly() */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_64 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_65 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_64);
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_62);
		VirtActionInvoker2< RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::SetValue(TContainer&,TValue) */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.EditorRenderData,System.Object>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisRuntimeObject_m74209EA58A21D287AD93F5A9C879BE3E12BC1F69_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * ___property1, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * ___container2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisRuntimeObject_m74209EA58A21D287AD93F5A9C879BE3E12BC1F69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_13 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_14 = ___container2;
		RuntimeObject ** L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject ** >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.EditorRenderData,System.Object>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_13, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_14, (RuntimeObject **)(RuntimeObject **)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_18 = ___property1;
		NullCheck((Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::get_IsReadOnly() */, (Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_20 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_21 = ___container2;
		RuntimeObject ** L_22 = ___value3;
		RuntimeObject * L_23 = (*(RuntimeObject **)L_22);
		NullCheck((Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_20);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_20, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_21, (RuntimeObject *)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_26 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_27 = ___container2;
		RuntimeObject ** L_28 = ___value3;
		RuntimeObject * L_29 = (*(RuntimeObject **)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.EditorRenderData,System.Object>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_27, (RuntimeObject *)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_34 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_35 = ___container2;
		RuntimeObject ** L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_34, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_35, (RuntimeObject **)(RuntimeObject **)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_39 = ___property1;
		NullCheck((Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::get_IsReadOnly() */, (Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_41 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_42 = ___container2;
		RuntimeObject ** L_43 = ___value3;
		RuntimeObject * L_44 = (*(RuntimeObject **)L_43);
		NullCheck((Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_41);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_41, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_42, (RuntimeObject *)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_47 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_48 = ___container2;
		RuntimeObject ** L_49 = ___value3;
		RuntimeObject * L_50 = (*(RuntimeObject **)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_48, (RuntimeObject *)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_55 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_56 = ___container2;
		RuntimeObject ** L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_55, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_56, (RuntimeObject **)(RuntimeObject **)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_60 = ___property1;
		NullCheck((Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::get_IsReadOnly() */, (Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF * L_62 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_63 = ___container2;
		RuntimeObject ** L_64 = ___value3;
		RuntimeObject * L_65 = (*(RuntimeObject **)L_64);
		NullCheck((Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_62);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tA24A000B5F70A8DCA47008E162D81B269FE0C2EF *)L_62, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_63, (RuntimeObject *)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.EditorRenderData,System.UInt64>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mEF1A92BD29C74E6E2ADF925C19A165892B4E9EEC_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * ___property1, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * ___container2, uint64_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mEF1A92BD29C74E6E2ADF925C19A165892B4E9EEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_13 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_14 = ___container2;
		uint64_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.EditorRenderData,System.UInt64>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_13, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_14, (uint64_t*)(uint64_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_18 = ___property1;
		NullCheck((Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::get_IsReadOnly() */, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_20 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_21 = ___container2;
		uint64_t* L_22 = ___value3;
		uint64_t L_23 = (*(uint64_t*)L_22);
		NullCheck((Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_20);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::SetValue(TContainer&,TValue) */, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_20, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_21, (uint64_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_26 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_27 = ___container2;
		uint64_t* L_28 = ___value3;
		uint64_t L_29 = (*(uint64_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.EditorRenderData,System.UInt64>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_27, (uint64_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_34 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_35 = ___container2;
		uint64_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_34, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_35, (uint64_t*)(uint64_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_39 = ___property1;
		NullCheck((Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::get_IsReadOnly() */, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_41 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_42 = ___container2;
		uint64_t* L_43 = ___value3;
		uint64_t L_44 = (*(uint64_t*)L_43);
		NullCheck((Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_41);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::SetValue(TContainer&,TValue) */, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_41, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_42, (uint64_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_47 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_48 = ___container2;
		uint64_t* L_49 = ___value3;
		uint64_t L_50 = (*(uint64_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_48, (uint64_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_55 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_56 = ___container2;
		uint64_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_55, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_56, (uint64_t*)(uint64_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_60 = ___property1;
		NullCheck((Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::get_IsReadOnly() */, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 * L_62 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_63 = ___container2;
		uint64_t* L_64 = ___value3;
		uint64_t L_65 = (*(uint64_t*)L_64);
		NullCheck((Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_62);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::SetValue(TContainer&,TValue) */, (Property_2_t8A5FC5085A2FE330F0BC99B0ED2009FD00AB62F6 *)L_62, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_63, (uint64_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.Entity,System.Int32>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m579B2D949C6D40C8773CBF2080711F8682DC1156_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * ___property1, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m579B2D949C6D40C8773CBF2080711F8682DC1156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_13 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.Entity,System.Int32>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_13, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_14, (int32_t*)(int32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_18 = ___property1;
		NullCheck((Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::get_IsReadOnly() */, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_20 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_21 = ___container2;
		int32_t* L_22 = ___value3;
		int32_t L_23 = (*(int32_t*)L_22);
		NullCheck((Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_20);
		VirtActionInvoker2< Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_20, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_21, (int32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_26 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_27 = ___container2;
		int32_t* L_28 = ___value3;
		int32_t L_29 = (*(int32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.Entity,System.Int32>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_27, (int32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_34 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_35 = ___container2;
		int32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_34, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_35, (int32_t*)(int32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_39 = ___property1;
		NullCheck((Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::get_IsReadOnly() */, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_41 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_42 = ___container2;
		int32_t* L_43 = ___value3;
		int32_t L_44 = (*(int32_t*)L_43);
		NullCheck((Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_41);
		VirtActionInvoker2< Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_41, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_42, (int32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_47 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_48 = ___container2;
		int32_t* L_49 = ___value3;
		int32_t L_50 = (*(int32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_48, (int32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_55 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_56 = ___container2;
		int32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_55, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_56, (int32_t*)(int32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_60 = ___property1;
		NullCheck((Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::get_IsReadOnly() */, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 * L_62 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_63 = ___container2;
		int32_t* L_64 = ___value3;
		int32_t L_65 = (*(int32_t*)L_64);
		NullCheck((Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_62);
		VirtActionInvoker2< Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_t7F97304563D7391FFB1124D68DC9655D33B46786 *)L_62, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_63, (int32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.Hash128,Unity.Mathematics.uint4>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m5AEC6363763AC29EEB5DF71AD2144B4280F9C1D2_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * ___property1, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * ___container2, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m5AEC6363763AC29EEB5DF71AD2144B4280F9C1D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_13 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_14 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_13, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_14, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_18 = ___property1;
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::get_IsReadOnly() */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_20 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_21 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_22 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_23 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_22);
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_20);
		VirtActionInvoker2< Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::SetValue(TContainer&,TValue) */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_20, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_21, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_26 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_27 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_28 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_29 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_27, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_34 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_35 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_34, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_35, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_39 = ___property1;
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::get_IsReadOnly() */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_41 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_42 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_43 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_44 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_43);
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_41);
		VirtActionInvoker2< Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::SetValue(TContainer&,TValue) */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_41, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_42, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_47 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_48 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_49 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_50 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_48, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_55 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_56 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_55, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_56, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_60 = ___property1;
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::get_IsReadOnly() */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_62 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_63 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_64 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_65 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_64);
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_62);
		VirtActionInvoker2< Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::SetValue(TContainer&,TValue) */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_62, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_63, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.SceneSection,System.Int32>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF9430E5813B15B533DB8CC2532191E548DF874AE_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * ___property1, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF9430E5813B15B533DB8CC2532191E548DF874AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_13 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.SceneSection,System.Int32>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_13, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_14, (int32_t*)(int32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_18 = ___property1;
		NullCheck((Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::get_IsReadOnly() */, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_20 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_21 = ___container2;
		int32_t* L_22 = ___value3;
		int32_t L_23 = (*(int32_t*)L_22);
		NullCheck((Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_20);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_20, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_21, (int32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_26 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_27 = ___container2;
		int32_t* L_28 = ___value3;
		int32_t L_29 = (*(int32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.SceneSection,System.Int32>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_27, (int32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_34 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_35 = ___container2;
		int32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_34, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_35, (int32_t*)(int32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_39 = ___property1;
		NullCheck((Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::get_IsReadOnly() */, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_41 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_42 = ___container2;
		int32_t* L_43 = ___value3;
		int32_t L_44 = (*(int32_t*)L_43);
		NullCheck((Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_41);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_41, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_42, (int32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_47 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_48 = ___container2;
		int32_t* L_49 = ___value3;
		int32_t L_50 = (*(int32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_48, (int32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_55 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_56 = ___container2;
		int32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_55, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_56, (int32_t*)(int32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_60 = ___property1;
		NullCheck((Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::get_IsReadOnly() */, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 * L_62 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_63 = ___container2;
		int32_t* L_64 = ___value3;
		int32_t L_65 = (*(int32_t*)L_64);
		NullCheck((Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_62);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_tBB959D187E58DA8EAB6DAF651D50E8134963B676 *)L_62, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_63, (int32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.SceneSection,Unity.Entities.Hash128>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mFD8515FEF4D6762989ED4AAE38B7834922CA5A4E_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * ___property1, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * ___container2, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mFD8515FEF4D6762989ED4AAE38B7834922CA5A4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_13 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_14 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_13, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_14, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_18 = ___property1;
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::get_IsReadOnly() */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_20 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_21 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_22 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_23 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_22);
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_20);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::SetValue(TContainer&,TValue) */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_20, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_21, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_26 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_27 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_28 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_29 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_27, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_34 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_35 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_34, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_35, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_39 = ___property1;
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::get_IsReadOnly() */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_41 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_42 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_43 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_44 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_43);
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_41);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::SetValue(TContainer&,TValue) */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_41, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_42, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_47 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_48 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_49 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_50 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_48, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_55 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_56 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_55, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_56, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_60 = ___property1;
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::get_IsReadOnly() */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_62 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_63 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_64 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_65 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_64);
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_62);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::SetValue(TContainer&,TValue) */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_62, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_63, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.SceneTag,Unity.Entities.Entity>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m945C6232C68C969EF918BF20AE01B6342985AEC9_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * ___property1, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * ___container2, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m945C6232C68C969EF918BF20AE01B6342985AEC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_13 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_14 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_13, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_14, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_18 = ___property1;
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_20 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_21 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_22 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_23 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_22);
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_20);
		VirtActionInvoker2< SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_20, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_21, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_26 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_27 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_28 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_29 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_27, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_34 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_35 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_34, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_35, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_39 = ___property1;
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_41 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_42 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_43 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_44 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_43);
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_41);
		VirtActionInvoker2< SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_41, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_42, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_47 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_48 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_49 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_50 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_48, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_55 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_56 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_55, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_56, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_60 = ___property1;
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_62 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_63 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_64 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_65 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_64);
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_62);
		VirtActionInvoker2< SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_62, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_63, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Mathematics.uint4,System.UInt32>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC8371829A88ABA8092509102140EBC8CE4BE42C4_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * ___property1, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * ___container2, uint32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC8371829A88ABA8092509102140EBC8CE4BE42C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_13 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_14 = ___container2;
		uint32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Mathematics.uint4,System.UInt32>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_13, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_14, (uint32_t*)(uint32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_18 = ___property1;
		NullCheck((Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::get_IsReadOnly() */, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_20 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_21 = ___container2;
		uint32_t* L_22 = ___value3;
		uint32_t L_23 = (*(uint32_t*)L_22);
		NullCheck((Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_20);
		VirtActionInvoker2< uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::SetValue(TContainer&,TValue) */, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_20, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_21, (uint32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_26 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_27 = ___container2;
		uint32_t* L_28 = ___value3;
		uint32_t L_29 = (*(uint32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Mathematics.uint4,System.UInt32>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_27, (uint32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_34 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_35 = ___container2;
		uint32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_34, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_35, (uint32_t*)(uint32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_39 = ___property1;
		NullCheck((Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::get_IsReadOnly() */, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_41 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_42 = ___container2;
		uint32_t* L_43 = ___value3;
		uint32_t L_44 = (*(uint32_t*)L_43);
		NullCheck((Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_41);
		VirtActionInvoker2< uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::SetValue(TContainer&,TValue) */, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_41, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_42, (uint32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_47 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_48 = ___container2;
		uint32_t* L_49 = ___value3;
		uint32_t L_50 = (*(uint32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_48, (uint32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_55 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_56 = ___container2;
		uint32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_55, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_56, (uint32_t*)(uint32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_60 = ___property1;
		NullCheck((Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::get_IsReadOnly() */, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C * L_62 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_63 = ___container2;
		uint32_t* L_64 = ___value3;
		uint32_t L_65 = (*(uint32_t*)L_64);
		NullCheck((Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_62);
		VirtActionInvoker2< uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::SetValue(TContainer&,TValue) */, (Property_2_t6D9CB15E3529893C893065B2747AA53D6C37B65C *)L_62, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_63, (uint32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisPropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D_TisRuntimeObject_mBBBE9FF855CE1C2585E5FDDCE940ECC43E5B4C60_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * ___property1, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * ___container2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisPropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D_TisRuntimeObject_mBBBE9FF855CE1C2585E5FDDCE940ECC43E5B4C60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_13 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_14 = ___container2;
		RuntimeObject ** L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject ** >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_13, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_14, (RuntimeObject **)(RuntimeObject **)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_18 = ___property1;
		NullCheck((Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_20 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_21 = ___container2;
		RuntimeObject ** L_22 = ___value3;
		RuntimeObject * L_23 = (*(RuntimeObject **)L_22);
		NullCheck((Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_20);
		VirtActionInvoker2< PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_20, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_21, (RuntimeObject *)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_26 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_27 = ___container2;
		RuntimeObject ** L_28 = ___value3;
		RuntimeObject * L_29 = (*(RuntimeObject **)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_27, (RuntimeObject *)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_34 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_35 = ___container2;
		RuntimeObject ** L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_34, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_35, (RuntimeObject **)(RuntimeObject **)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_39 = ___property1;
		NullCheck((Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_41 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_42 = ___container2;
		RuntimeObject ** L_43 = ___value3;
		RuntimeObject * L_44 = (*(RuntimeObject **)L_43);
		NullCheck((Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_41);
		VirtActionInvoker2< PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_41, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_42, (RuntimeObject *)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_47 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_48 = ___container2;
		RuntimeObject ** L_49 = ___value3;
		RuntimeObject * L_50 = (*(RuntimeObject **)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_48, (RuntimeObject *)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_55 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_56 = ___container2;
		RuntimeObject ** L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *, PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_55, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_56, (RuntimeObject **)(RuntimeObject **)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_60 = ___property1;
		NullCheck((Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE * L_62 = ___property1;
		PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D * L_63 = ___container2;
		RuntimeObject ** L_64 = ___value3;
		RuntimeObject * L_65 = (*(RuntimeObject **)L_64);
		NullCheck((Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_62);
		VirtActionInvoker2< PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tC8C8631156F99F9281FB3D42CA1ECF8F54BC30EE *)L_62, (PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)(PropertyWrapper_1_t39F1580F7040E9DF7D46B9002294F59BE9D8D25D *)L_63, (RuntimeObject *)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<UnityEngine.Keyframe,System.Int32Enum>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m0BD90872DC9F970FA10B6E5827B5054901E6889C_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * ___property1, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m0BD90872DC9F970FA10B6E5827B5054901E6889C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_13 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<UnityEngine.Keyframe,System.Int32Enum>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_13, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_14, (int32_t*)(int32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_18 = ___property1;
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::get_IsReadOnly() */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_20 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_21 = ___container2;
		int32_t* L_22 = ___value3;
		int32_t L_23 = (*(int32_t*)L_22);
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_20);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_20, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_21, (int32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_26 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_27 = ___container2;
		int32_t* L_28 = ___value3;
		int32_t L_29 = (*(int32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<UnityEngine.Keyframe,System.Int32Enum>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_27, (int32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_34 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_35 = ___container2;
		int32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_34, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_35, (int32_t*)(int32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_39 = ___property1;
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::get_IsReadOnly() */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_41 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_42 = ___container2;
		int32_t* L_43 = ___value3;
		int32_t L_44 = (*(int32_t*)L_43);
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_41);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_41, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_42, (int32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_47 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_48 = ___container2;
		int32_t* L_49 = ___value3;
		int32_t L_50 = (*(int32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_48, (int32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_55 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_56 = ___container2;
		int32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_55, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_56, (int32_t*)(int32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_60 = ___property1;
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::get_IsReadOnly() */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_62 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_63 = ___container2;
		int32_t* L_64 = ___value3;
		int32_t L_65 = (*(int32_t*)L_64);
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_62);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_62, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_63, (int32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<UnityEngine.Keyframe,System.Single>(System.Collections.Generic.List`1_Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mE249BE7D944F5943D12BC7A67B725FF46036BD6C_gshared (Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48  ___adapters0, Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * ___property1, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * ___container2, float* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mE249BE7D944F5943D12BC7A67B725FF46036BD6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_inline((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m4753DEDE106DB697DBDD795BCC04C189169E2B32_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_13 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_14 = ___container2;
		float* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<UnityEngine.Keyframe,System.Single>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_13, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_14, (float*)(float*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_18 = ___property1;
		NullCheck((Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::get_IsReadOnly() */, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_20 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_21 = ___container2;
		float* L_22 = ___value3;
		float L_23 = (*(float*)L_22);
		NullCheck((Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_20);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::SetValue(TContainer&,TValue) */, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_20, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_21, (float)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_26 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_27 = ___container2;
		float* L_28 = ___value3;
		float L_29 = (*(float*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<UnityEngine.Keyframe,System.Single>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_27, (float)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_34 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_35 = ___container2;
		float* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_34, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_35, (float*)(float*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_39 = ___property1;
		NullCheck((Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::get_IsReadOnly() */, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_41 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_42 = ___container2;
		float* L_43 = ___value3;
		float L_44 = (*(float*)L_43);
		NullCheck((Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_41);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::SetValue(TContainer&,TValue) */, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_41, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_42, (float)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_47 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_48 = ___container2;
		float* L_49 = ___value3;
		float L_50 = (*(float*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_48, (float)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_55 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_56 = ___container2;
		float* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_55, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_56, (float*)(float*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_60 = ___property1;
		NullCheck((Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::get_IsReadOnly() */, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC * L_62 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_63 = ___container2;
		float* L_64 = ___value3;
		float L_65 = (*(float*)L_64);
		NullCheck((Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_62);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::SetValue(TContainer&,TValue) */, (Property_2_t08DA74452F7E85CCAF56CE3B2F87C24CE98C85FC *)L_62, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_63, (float)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233((Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(Enumerator_t632C15401F4F2C7CF457E17861E1CFEBDA94CE48 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mF2E7525CC75FB7E0C410B0241E9E29C5CEA22233_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return L_68;
	}
}
// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::GetOrUpdateBuffer<System.Int32>(UnityEngine.ComputeBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ShaderData_GetOrUpdateBuffer_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m47ABD988F1069D0101E4D475C03716FC2FC1353D_gshared (ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * __this, ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** ___buffer0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderData_GetOrUpdateBuffer_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m47ABD988F1069D0101E4D475C03716FC2FC1353D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buffer == null)
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_0 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_1 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_2 = ___buffer0;
		int32_t L_3 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_4 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_5 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_5, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_5);
		// }
		goto IL_0031;
	}

IL_0013:
	{
		// else if (size > buffer.count)
		int32_t L_6 = ___size1;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_7 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_8 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_7);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8);
		int32_t L_9 = ComputeBuffer_get_count_m2D80EF2880723F6627924C0ABC642D8DB538D04D((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		// buffer.Dispose();
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_10 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_11 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_10);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11);
		ComputeBuffer_Dispose_m002F431B0EBF0B24DF20C7EB8FC2F44B596A6FFE((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11, /*hidden argument*/NULL);
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_12 = ___buffer0;
		int32_t L_13 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_14 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_15 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_15, (int32_t)L_13, (int32_t)L_14, /*hidden argument*/NULL);
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_15);
	}

IL_0031:
	{
		// return buffer;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_16 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_17 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_16);
		return L_17;
	}
}
// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::GetOrUpdateBuffer<UnityEngine.Rendering.Universal.ShaderInput_LightData>(UnityEngine.ComputeBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ShaderData_GetOrUpdateBuffer_TisLightData_t773677FBDE7024B6D8122EE78BEB3C6FD245EEDF_m770AEDAE9D77147FC5B189805A6984AA530448FB_gshared (ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * __this, ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** ___buffer0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderData_GetOrUpdateBuffer_TisLightData_t773677FBDE7024B6D8122EE78BEB3C6FD245EEDF_m770AEDAE9D77147FC5B189805A6984AA530448FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buffer == null)
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_0 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_1 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_2 = ___buffer0;
		int32_t L_3 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_4 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_5 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_5, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_5);
		// }
		goto IL_0031;
	}

IL_0013:
	{
		// else if (size > buffer.count)
		int32_t L_6 = ___size1;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_7 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_8 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_7);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8);
		int32_t L_9 = ComputeBuffer_get_count_m2D80EF2880723F6627924C0ABC642D8DB538D04D((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		// buffer.Dispose();
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_10 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_11 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_10);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11);
		ComputeBuffer_Dispose_m002F431B0EBF0B24DF20C7EB8FC2F44B596A6FFE((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11, /*hidden argument*/NULL);
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_12 = ___buffer0;
		int32_t L_13 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_14 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_15 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_15, (int32_t)L_13, (int32_t)L_14, /*hidden argument*/NULL);
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_15);
	}

IL_0031:
	{
		// return buffer;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_16 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_17 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_16);
		return L_17;
	}
}
// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::GetOrUpdateBuffer<UnityEngine.Rendering.Universal.ShaderInput_ShadowData>(UnityEngine.ComputeBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ShaderData_GetOrUpdateBuffer_TisShadowData_t7BEFADB532343B15D6E360E1D85CF0C3EC0D1571_mC05E30362C21A637E76FFF4CB0C87D5E88F8F77A_gshared (ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * __this, ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** ___buffer0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderData_GetOrUpdateBuffer_TisShadowData_t7BEFADB532343B15D6E360E1D85CF0C3EC0D1571_mC05E30362C21A637E76FFF4CB0C87D5E88F8F77A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buffer == null)
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_0 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_1 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_2 = ___buffer0;
		int32_t L_3 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_4 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_5 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_5, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_5);
		// }
		goto IL_0031;
	}

IL_0013:
	{
		// else if (size > buffer.count)
		int32_t L_6 = ___size1;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_7 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_8 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_7);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8);
		int32_t L_9 = ComputeBuffer_get_count_m2D80EF2880723F6627924C0ABC642D8DB538D04D((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		// buffer.Dispose();
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_10 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_11 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_10);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11);
		ComputeBuffer_Dispose_m002F431B0EBF0B24DF20C7EB8FC2F44B596A6FFE((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11, /*hidden argument*/NULL);
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_12 = ___buffer0;
		int32_t L_13 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_14 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_15 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_15, (int32_t)L_13, (int32_t)L_14, /*hidden argument*/NULL);
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_15);
	}

IL_0031:
	{
		// return buffer;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_16 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_17 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_16);
		return L_17;
	}
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::GetExecuteDelegate<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * RenderPass_GetExecuteDelegate_TisRuntimeObject_m23FB2C238E4C2C60FF27713DF813A667926D00F5_gshared (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * __this, const RuntimeMethod* method)
{
	{
		// where PassData : class, new() => ((RenderPass<PassData>)this).renderFunc;
		NullCheck(((RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * L_0 = (RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 *)((RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_renderFunc_11();
		return L_0;
	}
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::AddRenderPass<System.Object>(System.String,PassData&,UnityEngine.Rendering.ProfilingSampler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312  RenderGraph_AddRenderPass_TisRuntimeObject_m1C6757E94C2987D53A76FFEEE2D49C3AA1A2440D_gshared (RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042 * __this, String_t* ___passName0, RuntimeObject ** ___passData1, ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ___sampler2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderGraph_AddRenderPass_TisRuntimeObject_m1C6757E94C2987D53A76FFEEE2D49C3AA1A2440D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * V_0 = NULL;
	{
		// var renderPass = m_RenderGraphPool.Get<RenderPass<PassData>>();
		RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * L_0 = (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)__this->get_m_RenderGraphPool_2();
		NullCheck((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_0);
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_1 = ((  RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * (*) (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 *)L_1;
		// renderPass.Clear();
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_2 = V_0;
		NullCheck((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_2);
		RenderPass_Clear_m216A695EE93282211427AFAE4876C742D5CBE627((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_2, /*hidden argument*/NULL);
		// renderPass.index = m_RenderPasses.Count;
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_3 = V_0;
		List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * L_4 = (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)__this->get_m_RenderPasses_3();
		NullCheck((List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)L_4);
		int32_t L_5 = List_1_get_Count_m0B6FAC22324A918CFA9E37637257E82823029437_inline((List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)L_4, /*hidden argument*/List_1_get_Count_m0B6FAC22324A918CFA9E37637257E82823029437_RuntimeMethod_var);
		NullCheck(L_3);
		((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_3)->set_index_1(L_5);
		// renderPass.data = m_RenderGraphPool.Get<PassData>();
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_6 = V_0;
		RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * L_7 = (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)__this->get_m_RenderGraphPool_2();
		NullCheck((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_7);
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck(L_6);
		L_6->set_data_10(L_8);
		// renderPass.name = passName;
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_9 = V_0;
		String_t* L_10 = ___passName0;
		NullCheck(L_9);
		((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_9)->set_name_0(L_10);
		// renderPass.customSampler = sampler;
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_11 = V_0;
		ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * L_12 = ___sampler2;
		NullCheck(L_11);
		((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_11)->set_customSampler_2(L_12);
		// passData = renderPass.data;
		RuntimeObject ** L_13 = ___passData1;
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject * L_15 = (RuntimeObject *)L_14->get_data_10();
		*(RuntimeObject **)L_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_13, (void*)L_15);
		// m_RenderPasses.Add(renderPass);
		List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * L_16 = (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)__this->get_m_RenderPasses_3();
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_17 = V_0;
		NullCheck((List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)L_16);
		List_1_Add_m011F5FA3CC5FBB00875D2C3615DED27D6CE38D60((List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)L_16, (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_17, /*hidden argument*/List_1_Add_m011F5FA3CC5FBB00875D2C3615DED27D6CE38D60_RuntimeMethod_var);
		// return new RenderGraphBuilder(renderPass, m_Resources);
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_18 = V_0;
		RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * L_19 = (RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 *)__this->get_m_Resources_1();
		RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312  L_20;
		memset((&L_20), 0, sizeof(L_20));
		RenderGraphBuilder__ctor_m3EB345CC9E313C7C6EADFF534CA50FAF440D75CC((&L_20), (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_18, (RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 *)L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		// GetEventChain(root, s_InternalTransformList);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_mD90FFC4A70E16AFA81AC6C9CFF174630F77C608C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		V_0 = (int32_t)0;
		goto IL_0035;
	}

IL_000f:
	{
		// var transform = s_InternalTransformList[i];
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_inline((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		// if (Execute(transform.gameObject, eventData, callbackFunction))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return transform.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0031:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0035:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_14);
		int32_t L_15 = List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_inline((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_14, /*hidden argument*/List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// if (root == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_000b:
	{
		// Transform t = root.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_002f;
	}

IL_0014:
	{
		// if (CanHandleEvent<T>(t.gameObject))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return t.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0028:
	{
		// t = t.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_002f:
	{
		// while (t != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableExtensions::GetTimeWrapMode<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetTimeWrapMode_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m30FF9DB69D55B5628CB00267CF86C22A46D4DF2A_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A((Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		int32_t L_1 = PlayableHandle_GetTimeWrapMode_m75A158632EDF7752DB7675965A961C61F02F68BD((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (int32_t)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions::GetPlayState<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A((Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		int32_t L_1 = PlayableHandle_GetPlayState_m080CF2B647260A57E27E0FCDF65D92547DE8912E((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (int32_t)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A((Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		int32_t L_1 = ___inputPort1;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = PlayableHandle_GetInput_mBDC7706AEC48332E896AD885CC4DFB71D05D39A1((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), (int32_t)L_1, /*hidden argument*/NULL);
		V_1 = (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 )L_2;
		goto IL_001a;
	}

IL_001a:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableOutputExtensions::GetSourcePlayable<UnityEngine.Animations.AnimationPlayableOutput>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableOutputExtensions_GetSourcePlayable_TisAnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6_m1B4FB599F2A0F2532F36222E63E8924A5222D5B6_gshared (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  ___output0, const RuntimeMethod* method)
{
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0((AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *)(AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 )L_0;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = PlayableOutputHandle_GetSourcePlayable_mCD956832B4DD487FAFFA1669BAF5DC82A13BF625((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&V_0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_2), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_1, /*hidden argument*/NULL);
		V_1 = (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 )L_2;
		goto IL_001e;
	}

IL_001e:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Rendering.PostProcessing.PostProcessBundle UnityEngine.Rendering.PostProcessing.PostProcessLayer::GetBundle<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PostProcessBundle_tE29C05526676DF2148A37681C517E85FD98BE225 * PostProcessLayer_GetBundle_TisRuntimeObject_m68B12586B61BB9821DDF7EB70AB735DC1981ADC1_gshared (PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PostProcessLayer_GetBundle_TisRuntimeObject_m68B12586B61BB9821DDF7EB70AB735DC1981ADC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetBundle(typeof(T));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2 *)__this);
		PostProcessBundle_tE29C05526676DF2148A37681C517E85FD98BE225 * L_2 = PostProcessLayer_GetBundle_m2C6648E5FBBF817FE59EFFD64EFE89049A073641((PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<System.Int32Enum>(TEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ProfilingSampler_Get_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mF2CC212DE30788E5451264D3035A9BAEDB2945B8_gshared (int32_t ___marker0, const RuntimeMethod* method)
{
	TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF * V_0 = NULL;
	{
		// TProfilingSampler<TEnum>.samples.TryGetValue(marker, out var sampler);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 * L_0 = ((TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_samples_3();
		int32_t L_1 = ___marker0;
		NullCheck((Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 *)L_0);
		((  bool (*) (Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 *, int32_t, TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 *)L_0, (int32_t)L_1, (TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF **)(TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return sampler;
		TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<System.Object>(TEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ProfilingSampler_Get_TisRuntimeObject_mD5DA62CFA497D3B5ECCBDFD70D55BC01131F9314_gshared (RuntimeObject * ___marker0, const RuntimeMethod* method)
{
	TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 * V_0 = NULL;
	{
		// TProfilingSampler<TEnum>.samples.TryGetValue(marker, out var sampler);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E * L_0 = ((TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_samples_3();
		RuntimeObject * L_1 = ___marker0;
		NullCheck((Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E *)L_0);
		((  bool (*) (Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E *, RuntimeObject *, TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E *)L_0, (RuntimeObject *)L_1, (TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 **)(TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return sampler;
		TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Timeline.TimelineClip UnityEngine.Timeline.TrackAsset::CreateClip<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * TrackAsset_CreateClip_TisRuntimeObject_m18D5554A2F61580A8C4F632E5EBDD1451FA08C50_gshared (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackAsset_CreateClip_TisRuntimeObject_m18D5554A2F61580A8C4F632E5EBDD1451FA08C50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateClip(typeof(T));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D *)__this);
		TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_2 = TrackAsset_CreateClip_m13AE8DFB7EB2AF8FD1F0CCEE1F6FBEEBABC8EEC5((TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Vuforia.TargetFinder Vuforia.ObjectTracker::GetTargetFinder<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ObjectTracker_GetTargetFinder_TisRuntimeObject_m8178BA66A8F4F11AF7663D58195358E539609362_gshared (ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_GetTargetFinder_TisRuntimeObject_m8178BA66A8F4F11AF7663D58195358E539609362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_0028;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_0028:
	{
		Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * L_4 = (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)__this->get_mTargetFinders_3();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)L_4);
		bool L_7 = Dictionary_2_TryGetValue_mD59E4204584135A12DCA06596881B7BEB93616F5((Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)L_4, (Type_t *)L_6, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mD59E4204584135A12DCA06596881B7BEB93616F5_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18(/*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck((RuntimeObject*)L_8);
		intptr_t L_10 = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(97 /* System.IntPtr Vuforia.IVuforiaWrapper::ObjectTrackerGetTargetFinder(System.Int32) */, IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		V_2 = (intptr_t)L_10;
		intptr_t L_11 = V_2;
		bool L_12 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_11, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_0066:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_15 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_16 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_15, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_14) == ((RuntimeObject*)(Type_t *)L_16))))
		{
			goto IL_0083;
		}
	}
	{
		intptr_t L_17 = V_2;
		ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * L_18 = (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 *)il2cpp_codegen_object_new(ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var);
		ImageTargetFinder__ctor_m68412DD938E09F63B7837EBBB6B0E585EC35C32F(L_18, (intptr_t)L_17, /*hidden argument*/NULL);
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_18;
	}

IL_0083:
	{
		Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * L_19 = (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)__this->get_mTargetFinders_3();
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_20 = V_0;
		NullCheck((RuntimeObject *)L_20);
		Type_t * L_21 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_20, /*hidden argument*/NULL);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_22 = V_0;
		NullCheck((Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)L_19);
		Dictionary_2_set_Item_m178261C9451569356F8398040DA6BCE205F08ADC((Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)L_19, (Type_t *)L_21, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_22, /*hidden argument*/Dictionary_2_set_Item_m178261C9451569356F8398040DA6BCE205F08ADC_RuntimeMethod_var);
	}

IL_0095:
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_23 = V_0;
		return L_23;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisRuntimeObject_m916D0E0C8A561BC868FEF7BC5F5C63981CE566FA_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t854A9E275C64086C9E5A8BA5252236753338FCA3 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t854A9E275C64086C9E5A8BA5252236753338FCA3 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t854A9E275C64086C9E5A8BA5252236753338FCA3 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t854A9E275C64086C9E5A8BA5252236753338FCA3 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t854A9E275C64086C9E5A8BA5252236753338FCA3 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m5A02A47D700F6361B284185F64EB2196FA5849B7_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t1AF4389885EDCAF20EE4E6FBD0CD50A435897369 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t1AF4389885EDCAF20EE4E6FBD0CD50A435897369 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_6 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t1AF4389885EDCAF20EE4E6FBD0CD50A435897369 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t1AF4389885EDCAF20EE4E6FBD0CD50A435897369 *, TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t1AF4389885EDCAF20EE4E6FBD0CD50A435897369 *)L_3, (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData_VuMarkTargetResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisVuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE_mC951ADCB5D7F2832250FA4CD647EC95B6DD5A03A_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_tD56B3E30FD7CB7B6C9BBEBFD094C2437FD6C5028 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_tD56B3E30FD7CB7B6C9BBEBFD094C2437FD6C5028 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE  L_6 = InterfaceFuncInvoker1< VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_tD56B3E30FD7CB7B6C9BBEBFD094C2437FD6C5028 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_tD56B3E30FD7CB7B6C9BBEBFD094C2437FD6C5028 *, VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_tD56B3E30FD7CB7B6C9BBEBFD094C2437FD6C5028 *)L_3, (VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisRuntimeObject_mB839CE180FB90B7282A0F991292FBA6738DB8C02_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t048BF884DEC634DF2C72B18DE0074BEEFCF2C7E6 * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_t048BF884DEC634DF2C72B18DE0074BEEFCF2C7E6 * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t048BF884DEC634DF2C72B18DE0074BEEFCF2C7E6 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t048BF884DEC634DF2C72B18DE0074BEEFCF2C7E6 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t048BF884DEC634DF2C72B18DE0074BEEFCF2C7E6 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m88BC0447DB63C11323883CA0AA42F92F36DEF065_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_tFA00CC82AB530CBB3AE283838E61F2A92D8AADEA * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_tFA00CC82AB530CBB3AE283838E61F2A92D8AADEA * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_6 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_tFA00CC82AB530CBB3AE283838E61F2A92D8AADEA *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_tFA00CC82AB530CBB3AE283838E61F2A92D8AADEA *, TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_tFA00CC82AB530CBB3AE283838E61F2A92D8AADEA *)L_3, (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
