/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "../../asn1/../ttcn/AtsCAM/lib/asn1/cdd/ITS_Container.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <NativeInteger.h>
#ifndef	_EmergencyVehicleApproachingSubCauseCode_H_
#define	_EmergencyVehicleApproachingSubCauseCode_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EmergencyVehicleApproachingSubCauseCode {
	EmergencyVehicleApproachingSubCauseCode_unavailable	= 0,
	EmergencyVehicleApproachingSubCauseCode_emergencyVehicleApproaching	= 1,
	EmergencyVehicleApproachingSubCauseCode_prioritizedVehicleApproaching	= 2
} e_EmergencyVehicleApproachingSubCauseCode;

/* EmergencyVehicleApproachingSubCauseCode */
typedef long	 EmergencyVehicleApproachingSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmergencyVehicleApproachingSubCauseCode;
asn_struct_free_f EmergencyVehicleApproachingSubCauseCode_free;
asn_struct_print_f EmergencyVehicleApproachingSubCauseCode_print;
asn_constr_check_f EmergencyVehicleApproachingSubCauseCode_constraint;
ber_type_decoder_f EmergencyVehicleApproachingSubCauseCode_decode_ber;
der_type_encoder_f EmergencyVehicleApproachingSubCauseCode_encode_der;
xer_type_decoder_f EmergencyVehicleApproachingSubCauseCode_decode_xer;
xer_type_encoder_f EmergencyVehicleApproachingSubCauseCode_encode_xer;
jer_type_encoder_f EmergencyVehicleApproachingSubCauseCode_encode_jer;
oer_type_decoder_f EmergencyVehicleApproachingSubCauseCode_decode_oer;
oer_type_encoder_f EmergencyVehicleApproachingSubCauseCode_encode_oer;
per_type_decoder_f EmergencyVehicleApproachingSubCauseCode_decode_uper;
per_type_encoder_f EmergencyVehicleApproachingSubCauseCode_encode_uper;
per_type_decoder_f EmergencyVehicleApproachingSubCauseCode_decode_aper;
per_type_encoder_f EmergencyVehicleApproachingSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EmergencyVehicleApproachingSubCauseCode_H_ */
#include <asn_internal.h>
