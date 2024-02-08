/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2BaseTypes.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "SecLatitude.h"
#include "SecLongitude.h"
#include "SecElevation.h"
#include <constr_SEQUENCE.h>
#ifndef	_ThreeDLocation_H_
#define	_ThreeDLocation_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ThreeDLocation */
typedef struct ThreeDLocation {
	SecLatitude_t	 latitude;
	SecLongitude_t	 longitude;
	SecElevation_t	 elevation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThreeDLocation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThreeDLocation;
extern asn_SEQUENCE_specifics_t asn_SPC_ThreeDLocation_specs_1;
extern asn_TYPE_member_t asn_MBR_ThreeDLocation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ThreeDLocation_H_ */
#include <asn_internal.h>