/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <NativeInteger.h>
#ifndef	_IviIdentificationNumber_H_
#define	_IviIdentificationNumber_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IviIdentificationNumber */
typedef long	 IviIdentificationNumber_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_IviIdentificationNumber_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_IviIdentificationNumber;
asn_struct_free_f IviIdentificationNumber_free;
asn_struct_print_f IviIdentificationNumber_print;
asn_constr_check_f IviIdentificationNumber_constraint;
ber_type_decoder_f IviIdentificationNumber_decode_ber;
der_type_encoder_f IviIdentificationNumber_encode_der;
xer_type_decoder_f IviIdentificationNumber_decode_xer;
xer_type_encoder_f IviIdentificationNumber_encode_xer;
jer_type_encoder_f IviIdentificationNumber_encode_jer;
oer_type_decoder_f IviIdentificationNumber_decode_oer;
oer_type_encoder_f IviIdentificationNumber_encode_oer;
per_type_decoder_f IviIdentificationNumber_decode_uper;
per_type_encoder_f IviIdentificationNumber_encode_uper;
per_type_decoder_f IviIdentificationNumber_decode_aper;
per_type_encoder_f IviIdentificationNumber_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _IviIdentificationNumber_H_ */
#include <asn_internal.h>
