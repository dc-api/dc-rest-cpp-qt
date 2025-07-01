/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIStickerPackResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIStickerPackResponse::OAIStickerPackResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStickerPackResponse::OAIStickerPackResponse() {
    this->initializeModel();
}

OAIStickerPackResponse::~OAIStickerPackResponse() {}

void OAIStickerPackResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_sku_id_isSet = false;
    m_sku_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_stickers_isSet = false;
    m_stickers_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_cover_sticker_id_isSet = false;
    m_cover_sticker_id_isValid = false;

    m_banner_asset_id_isSet = false;
    m_banner_asset_id_isValid = false;
}

void OAIStickerPackResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStickerPackResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_sku_id_isValid = ::dc_rest::fromJsonValue(m_sku_id, json[QString("sku_id")]);
    m_sku_id_isSet = !json[QString("sku_id")].isNull() && m_sku_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_stickers_isValid = ::dc_rest::fromJsonValue(m_stickers, json[QString("stickers")]);
    m_stickers_isSet = !json[QString("stickers")].isNull() && m_stickers_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_cover_sticker_id_isValid = ::dc_rest::fromJsonValue(m_cover_sticker_id, json[QString("cover_sticker_id")]);
    m_cover_sticker_id_isSet = !json[QString("cover_sticker_id")].isNull() && m_cover_sticker_id_isValid;

    m_banner_asset_id_isValid = ::dc_rest::fromJsonValue(m_banner_asset_id, json[QString("banner_asset_id")]);
    m_banner_asset_id_isSet = !json[QString("banner_asset_id")].isNull() && m_banner_asset_id_isValid;
}

QString OAIStickerPackResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStickerPackResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_sku_id_isSet) {
        obj.insert(QString("sku_id"), ::dc_rest::toJsonValue(m_sku_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_stickers.size() > 0) {
        obj.insert(QString("stickers"), ::dc_rest::toJsonValue(m_stickers));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_cover_sticker_id_isSet) {
        obj.insert(QString("cover_sticker_id"), ::dc_rest::toJsonValue(m_cover_sticker_id));
    }
    if (m_banner_asset_id_isSet) {
        obj.insert(QString("banner_asset_id"), ::dc_rest::toJsonValue(m_banner_asset_id));
    }
    return obj;
}

QString OAIStickerPackResponse::getId() const {
    return m_id;
}
void OAIStickerPackResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIStickerPackResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIStickerPackResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIStickerPackResponse::getSkuId() const {
    return m_sku_id;
}
void OAIStickerPackResponse::setSkuId(const QString &sku_id) {
    m_sku_id = sku_id;
    m_sku_id_isSet = true;
}

bool OAIStickerPackResponse::is_sku_id_Set() const{
    return m_sku_id_isSet;
}

bool OAIStickerPackResponse::is_sku_id_Valid() const{
    return m_sku_id_isValid;
}

QString OAIStickerPackResponse::getName() const {
    return m_name;
}
void OAIStickerPackResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIStickerPackResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIStickerPackResponse::is_name_Valid() const{
    return m_name_isValid;
}

QList<OAIStandardStickerResponse> OAIStickerPackResponse::getStickers() const {
    return m_stickers;
}
void OAIStickerPackResponse::setStickers(const QList<OAIStandardStickerResponse> &stickers) {
    m_stickers = stickers;
    m_stickers_isSet = true;
}

bool OAIStickerPackResponse::is_stickers_Set() const{
    return m_stickers_isSet;
}

bool OAIStickerPackResponse::is_stickers_Valid() const{
    return m_stickers_isValid;
}

QString OAIStickerPackResponse::getDescription() const {
    return m_description;
}
void OAIStickerPackResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIStickerPackResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIStickerPackResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIStickerPackResponse::getCoverStickerId() const {
    return m_cover_sticker_id;
}
void OAIStickerPackResponse::setCoverStickerId(const QString &cover_sticker_id) {
    m_cover_sticker_id = cover_sticker_id;
    m_cover_sticker_id_isSet = true;
}

bool OAIStickerPackResponse::is_cover_sticker_id_Set() const{
    return m_cover_sticker_id_isSet;
}

bool OAIStickerPackResponse::is_cover_sticker_id_Valid() const{
    return m_cover_sticker_id_isValid;
}

QString OAIStickerPackResponse::getBannerAssetId() const {
    return m_banner_asset_id;
}
void OAIStickerPackResponse::setBannerAssetId(const QString &banner_asset_id) {
    m_banner_asset_id = banner_asset_id;
    m_banner_asset_id_isSet = true;
}

bool OAIStickerPackResponse::is_banner_asset_id_Set() const{
    return m_banner_asset_id_isSet;
}

bool OAIStickerPackResponse::is_banner_asset_id_Valid() const{
    return m_banner_asset_id_isValid;
}

bool OAIStickerPackResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sku_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_stickers.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_sticker_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_banner_asset_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStickerPackResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_sku_id_isValid && m_name_isValid && m_stickers_isValid && true;
}

} // namespace dc_rest
