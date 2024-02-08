/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "../../asn1/../ttcn/AtsCAM/lib/asn1/cdd/ITS_Container.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <NativeInteger.h>
#ifndef	_ITS_Container_Temperature_H_
#define	_ITS_Container_Temperature_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ITS_Container_Temperature {
	ITS_Container_Temperature_equalOrSmallerThanMinus60Deg	= -60,
	ITS_Container_Temperature_oneDegreeCelsius	= 1,
	ITS_Container_Temperature_equalOrGreaterThan67Deg	= 67
} e_ITS_Container_Temperature;

/* ITS-Container_Temperature */
typedef long	 ITS_Container_Temperature_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ITS_Container_Temperature_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ITS_Container_Temperature;
asn_struct_free_f ITS_Container_Temperature_free;
asn_struct_print_f ITS_Container_Temperature_print;
asn_constr_check_f ITS_Container_Temperature_constraint;
ber_type_decoder_f ITS_Container_Temperature_decode_ber;
der_type_encoder_f ITS_Container_Temperature_encode_der;
xer_type_decoder_f ITS_Container_Temperature_decode_xer;
xer_type_encoder_f ITS_Container_Temperature_encode_xer;
jer_type_encoder_f ITS_Container_Temperature_encode_jer;
oer_type_decoder_f ITS_Container_Temperature_decode_oer;
oer_type_encoder_f ITS_Container_Temperature_encode_oer;
per_type_decoder_f ITS_Container_Temperature_decode_uper;
per_type_encoder_f ITS_Container_Temperature_encode_uper;
per_type_decoder_f ITS_Container_Temperature_decode_aper;
per_type_encoder_f ITS_Container_Temperature_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ITS_Container_Temperature_H_ */
#include <asn_internal.h>