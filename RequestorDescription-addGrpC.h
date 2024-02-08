/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/AddGrpC.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "FuelType.h"
#include "BatteryStatus.h"
#include <constr_SEQUENCE.h>
#ifndef	_RequestorDescription_addGrpC_H_
#define	_RequestorDescription_addGrpC_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RequestorDescription-addGrpC */
typedef struct RequestorDescription_addGrpC {
	FuelType_t	*fuel;	/* OPTIONAL */
	BatteryStatus_t	*batteryStatus;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RequestorDescription_addGrpC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestorDescription_addGrpC;
extern asn_SEQUENCE_specifics_t asn_SPC_RequestorDescription_addGrpC_specs_1;
extern asn_TYPE_member_t asn_MBR_RequestorDescription_addGrpC_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RequestorDescription_addGrpC_H_ */
#include <asn_internal.h>
